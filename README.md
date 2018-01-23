KUKU-Like multiplication alignment

## DESCRIPTION

　引数を九九のように表示するプログラムです。
　コマンドラインから二つの整数x, y を受け取り、九九の要領で [1..x] × [1..y ] のかけ算表を表示します。
　このプログラムは、情報生命プログラム演習Iの課題のために作成されました。

## INSTALL

　インストール方法

````
    $ ./configure
````

  then

````
  　$ make install
````
 
## USAGE

  以下のようにコマンドライン引数に対し二つの渡します。

````
    $ kuku 2 3
````

　結果が以下のように表示される。

````
    1 2 3 
    2 4 6 
````

　コマンドライン引数-pを用いると足し算を表示する。

````
    kuku -p 2 3
````

````
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

  GitHubのIssueのところに書いといてください
