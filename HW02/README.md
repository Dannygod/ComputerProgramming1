115 資工系 許宸研 41147020S
hw0201:
代公式進去，用<math.h>得到Pi值，最後相減要是正數
錯誤輸入: n<1

hw0202:
1.用while先將日往上加,31日之後進位(日=1,月+1),12月之後進位(月=1,年+1)
2.中間把日、月、年各個數字分開，以方便判斷迴文
錯誤輸入: 日、月不符規定

hw0203:
1.先用log10函數得到該數字(num)的位數，再將數字(num)除以10的(位數)次方，得到最高位數，儲存進sum
2.用%得到該數字的去掉最高位數的值
3.重複使用此方式得到各位數總和
*用do while確保sum一開始為0的情況不會跳出迴圈

hw0204:
1.輸出若為三位數以上，不加逗號 ex: Principal: $1817.62 而非 Principal: $1,817.62
2.為了使Remaining為0，不做四捨五入
錯誤輸入: loan_term不為10、15、20、30

hw0205:
Part 1: 先印出上半部+右上半部的長方體
Part 2: 印前面+右下半部的長方體
遇到要變顏色的部分，用count_height控制每行要不要印顏色或"#"
*註:
因為是用一個迴圈一次把Part 1的部分印出，故沒辦法在一行內印出兩個以上的長方體，只能讓下一個長方體換行印
錯誤輸入: 長、寬、高小於4, (2*長+寬-1)超過螢幕寬度80