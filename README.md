問題A要include <algorithm>跟<vector>才能夠使用sort()跟vector。首先會利用迴圈將資料放進我設定叫做v的vector，接著利用sort進行排序。
由於題目要求將數字前五大的加起來，sort會由小排到大，所以我將vector最後五項加起來就得到答案。

問題B
1000時sort=0.000202s；insertion_sort=0.009247s

10000時sort=0.002502s；insertion_sort=1.06424s

100000時sort=0.035221s；insertion_sort=102.792s

1000000時sort=0.399755s；insertion_sort=10282.6s
