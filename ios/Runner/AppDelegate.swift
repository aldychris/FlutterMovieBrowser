import UIKit
import Flutter
import common

let KTUnit = KotlinUnit()

@UIApplicationMain
@objc class AppDelegate: FlutterAppDelegate, MovieListView {
  
    var channelRes: FlutterResult!
    
    override func application(
    _ application: UIApplication,
    didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?
  ) -> Bool {

    let controller : FlutterViewController = window?.rootViewController as! FlutterViewController
    let channel = FlutterMethodChannel(name: "com.github.aldychris.moviebrowser.flutter_movie/getMovie", binaryMessenger: controller)
    
    let api = MovieApiService(endPoint: "https://www.omdbapi.com", apiKey: YourApiKey.API_KEY)
    let apiService = { MovieBrowserRepositoryImpl(apiService: api) } ()
    let presenter: MovieListPresenter = {
        MovieListPresenter(uiContext: CoroutineDispatcher() as KotlinCoroutineContext,
                           view: self,
                           repository: apiService)}()
    
    channel.setMethodCallHandler({
        (call: FlutterMethodCall, result: @escaping FlutterResult) -> Void in
        self.channelRes = result
        guard call.method == "getMovie" else {
            return
        }
        
        let args: [String:String] = call.arguments as! [String : String]
        let searchQuery:String = args["query"] ?? ""
        
        presenter.getMovieList(title: searchQuery)
    })
    
    GeneratedPluginRegistrant.register(with: self)
    return super.application(application, didFinishLaunchingWithOptions: launchOptions)
  }
    
    func getMovieSuccsess(searchViewModel: SearchViewModel) {
        channelRes(searchViewModel.parseForFlutter())
    }
    
    func showProgressIndicator(show: Bool) {
        
    }
    
    func showError(error: KotlinThrowable) {
        channelRes(FlutterError(code: "ErrorCode", message: error.message, details: nil))
    }
}
