class MovieViewModel {

  final String title;
  final String year;
  final String type;
  final String poster;

  MovieViewModel(this.title, this.year, this.type, this.poster);

  static MovieViewModel kotlinToDartObject(dynamic val){
    return MovieViewModel(val['title'], val['year'], val['type'], val['imgUrl']);
  }

}