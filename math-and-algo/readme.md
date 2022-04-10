# memo

```zsh
ulimit -c unlimited
```

segmentation faultの場所を特定するために利用
→core fileが出力されるようになる
```
ulimit -c
> 0
```
ならば上記コマンドでunlimitedに変える。

コンパイルするときに -g optionを利用することを忘れない

ex:`gcc -g hoge.cpp`

core fileを利用したsegmentation faultの解析にはgdbが必要