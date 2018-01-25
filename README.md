KUKU-Like multiplication alignment

## DESCRIPTION

　引数を九九のように表示するプログラムです。
　コマンドラインから二つの整数x, y を受け取り、九九の要領で [1..x] × [1..y ] のかけ算表を表示します。
　このプログラムは、情報生命プログラム演習Iの課題のために作成されました。

## REQUIREMENTS

  Python 2 or 3

## INSTALL

````
$ python waf configure
````

  then

````
$ python waf build
````
 
## USAGE

  以下のようにコマンドライン引数に対し二つの整数を渡す。

````
$ kuku 2 3
````

　すると、[1, 2] × [1, 2, 3]の掛け算の結果が以下のように九九のように表示される。

````
1 2 3 
2 4 6 
````

　コマンドライン引数-pを用いると足し算の結果を表示する。

````
$ kuku -p 2 3
2 3 4 
3 4 5 
````

## AUTHOR

  Kentaro Tara
  連絡先: 
  スクショを貼る

## LICENSE

  Public Domain

## For bugs, wishes, etc.

  GitHubのIssueのところに書いといてください。
