import 'package:flutter/material.dart';
import 'row_view.dart';
import 'package:flutter/services.dart';
import 'dart:async';
import 'package:progress_indicators/progress_indicators.dart';
import 'package:movie_browser/data/model/movie_view_model.dart';

class HomePage extends StatefulWidget {
  HomePage({Key key}) : super(key: key);

  @override
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {

  static const platform = const MethodChannel('com.github.aldychris.moviebrowser.flutter_movie/getMovie');
  final _inputText = TextEditingController();
  bool _hideLoading = true;
  bool _hideList = true;

  List<MovieViewModel> _listData = [];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        resizeToAvoidBottomPadding: true,
        appBar: AppBar(
          title: Text('Movie Browser'),
        ),
        body: Column(
          children: <Widget>[
            Expanded(
              child: Padding(
                padding: const EdgeInsets.all(8.0),
                child: Row(
                  crossAxisAlignment: CrossAxisAlignment.center,
                  children: <Widget>[
                    Expanded(
                      child: TextField(
                        controller: _inputText,
                        decoration: InputDecoration(
                            hintText: '',
                            labelText: 'Movie title',
                            suffixStyle: const TextStyle(color: Colors.green)),
                        textInputAction: TextInputAction.done,
                        keyboardType: TextInputType.text,
                      ),
                      flex: 8,
                    ),
                    Expanded(
                      child: RaisedButton(
                        shape: RoundedRectangleBorder(
                            borderRadius: new BorderRadius.circular(10.0)),
                        color: Theme.of(context).accentColor,
                        elevation: 4.0,
                        splashColor: Colors.blueGrey,
                        textColor: Colors.white,
                        child: const Text('Search'),
                        onPressed: () {
                          print(_inputText.text);
                          showLoadingScreen();
                          _getMovie(_inputText.text);
                        },
                      ),
                      flex: 4,
                    ),
                  ],
                ),
              ),
              flex: 2,
            ),
            Expanded(
              child: Stack(
                children: <Widget>[
                  Offstage(
                    offstage: _hideList,
                    child: Container(
                      color: Colors.transparent,
                      child: Visibility(
                        visible: true,
                        child: ListView.separated(
                          separatorBuilder: (context, index) => Divider(
                            height: 0,
                            color: Colors.white,
                          ),
                          itemCount: _listData.length,
                          itemBuilder: (context, index) => Padding(
                            padding:
                            EdgeInsets.only(left: 5, right: 5, top: 3, bottom: 2),
                            child: RowView(_listData[index]),
                          ),
                        ),
                      ),
                    ),
                  ),
                  Offstage(
                    offstage: _hideLoading,
                    child: Container(
                      alignment: Alignment.center,
                      color: Colors.transparent,
                      child: JumpingText('Fetch Data...'),
                    ),
                  ),
                ],
              ),
              flex: 12,
            ),
          ],
        ));
  }

  Future<void> _getMovie(String query) async {
    try {
      final List<dynamic> result = await platform.invokeMethod('getMovie', <String, String>{
        'query' : query
      });
      final listObj = result.map(MovieViewModel.kotlinToDartObject).toList();

      setState(() {
        _listData = listObj;
      });

      hideLoadingScreen();

    } on PlatformException catch (e) {
      String movieObj = "Failed to get data: '${e.message}'.";
      print("Failed get movie"   +'${e.message}');

      hideLoadingScreen();
      _showDialog(e.message);
    }
  }

  void _showDialog(String message) {
    showDialog(
      context: context,
      builder: (BuildContext context) {
        // return object of type Dialog
        return AlertDialog(
          title: new Text("Warning"),
          content: new Text(message),
          actions: <Widget>[
            new FlatButton(
              child: new Text("Close"),
              onPressed: () {
                Navigator.of(context).pop();
              },
            ),
          ],
        );
      },
    );
  }

  void showLoadingScreen(){
    setState((){
      _hideLoading = false;
      _hideList = true;
    });
  }

  void hideLoadingScreen() {
    setState((){
      _hideLoading = true;
      _hideList = false;
    });
  }


}