import 'package:cached_network_image/cached_network_image.dart';
import 'package:flutter/material.dart';
import 'package:flutter/widgets.dart';
import 'package:movie_browser/data/model/movie_view_model.dart';

class RowView extends StatelessWidget {

  final MovieViewModel data;

  RowView(this.data);

  @override
  Widget build(BuildContext context) {
      return Card(
        child: ConstrainedBox(
          constraints: BoxConstraints.expand(height: 190.0),
          child: Stack(
            children: <Widget>[
              Container(
                alignment: Alignment.center,
                child: CachedNetworkImage(
                  imageUrl: data.poster,
                  fit: BoxFit.cover,
                  height: double.infinity,
                  width: double.infinity,
                  placeholder: (context, url) => new CircularProgressIndicator(),
                  errorWidget: (context, url, error) => new Icon(Icons.error),
                ),
              ),
              Align(
                alignment: Alignment.topRight,
                child: Container(
                  padding: EdgeInsets.only(top: 5, bottom: 5, left: 8, right: 8),
                  color: Colors.black38,
                  child: Text(
                    data.type,
                    style: TextStyle(
                      color: Colors.white,
                    ),
                  ),
                ),
              ),
              Container(
                alignment: Alignment.bottomLeft,
                child: Container(
                  color: Colors.black38,
                  child: Padding(
                    padding: const EdgeInsets.all(8.0),
                    child: Column(
                      mainAxisAlignment: MainAxisAlignment.start,
                      mainAxisSize: MainAxisSize.min,
                      crossAxisAlignment: CrossAxisAlignment.stretch,
                      children: <Widget>[
                        Text(
                          data.title,
                          style: TextStyle(
                            color: Colors.white,
                          ),
                        ),
                        Text(
                          data.year,
                          style: TextStyle(
                            color: Colors.white,
                          ),
                        )
                      ],
                    ),
                  ),
                ),
              )
            ],
          ),
        ),
      );
  }



}