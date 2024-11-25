cost_price=int(input("enter the cost price of the item"))
sell_price=int(input("enter the selling price of thr item"))
#if sp is more than cp -profit
if sell_price > cost_price:
    profit=sell_price-cost_price
    print("profit of the item:",profit)
    #if cp is more than the sp-loss 
elif cost_price > sell_price:# else if
    loss= cost_price -sell_price
    print("loss of the item:",loss)
else:# this will excute when both the statement are not true..
    print("no profit no loss")
  #elif condition statement can be name time in a program  
    