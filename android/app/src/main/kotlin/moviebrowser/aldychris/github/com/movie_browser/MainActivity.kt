package moviebrowser.aldychris.github.com.movie_browser

import android.os.Bundle
import data.api.MovieApiService
import data.repository.MovieBrowserRepository
import data.repository.MovieBrowserRepositoryImpl
import data.viewmodel.SearchViewModel

import io.flutter.app.FlutterActivity
import io.flutter.plugin.common.MethodChannel
import io.flutter.plugins.GeneratedPluginRegistrant
import kotlinx.coroutines.Dispatchers
import presentation.movielist.MovieListPresenter
import presentation.movielist.MovieListView

class MainActivity: FlutterActivity(), MovieListView {

  private val CHANNEL = "com.github.aldychris.moviebrowser.flutter_movie/getMovie"

  private val api = MovieApiService("https://www.omdbapi.com", YourApiKey.API_KEY)
  private val repository: MovieBrowserRepository by lazy { MovieBrowserRepositoryImpl(api) }
  private val presenter by lazy { MovieListPresenter(Dispatchers.Main, this, repository) }

  private var channelRes: MethodChannel.Result? = null

  override fun onCreate(savedInstanceState: Bundle?) {
    super.onCreate(savedInstanceState)
    GeneratedPluginRegistrant.registerWith(this)

    MethodChannel(flutterView, CHANNEL).setMethodCallHandler { call, result ->
      channelRes = result

      if (call.method == "getMovie") {
        val searchQuery = call.argument<String>("query")
        presenter.getMovieList(searchQuery!!)
      }
      else {
        result.notImplemented()
      }
    }
  }

  override fun getMovieSuccsess(searchViewModel: SearchViewModel) {

    val res = searchViewModel.parseForFlutter()
    channelRes!!.success(res)
  }

  override fun showError(error: Throwable) {
    channelRes!!.error(error.message, error.message, null)
  }

  override fun showProgressIndicator(show: Boolean) {

  }



}
