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

　により、ビルド可能です。出来上がったバイナリファイルはbuild以下に置かれます。
 
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
  連絡先: ｋｉｄ．ｏｆ．ｃｏｄ４２８☆ｇｍａｉｌ．ｃｏｍ  
  半角に直し、☆をアットマークに直してください。  

## LICENSE

  THE MIT LICENSE  

  This includes waf script. It is BSD License. To use waf, follow the sentences below.  

  Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. The name of the author may not be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE AUTHOR "AS IS" AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

## BUG_FIX_REQUEST 

  GitHubのIssueのところにお願いします。


## TRAVIS_CI BADGE

  TRAVIS_CIのバッジです。  

[![Build Status](https://travis-ci.org/rnrnuraln/Info_bio_pro_kadai.svg?branch=master)](https://travis-ci.org/rnrnuraln/Info_bio_pro_kadai)
