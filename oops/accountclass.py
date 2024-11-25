class Account:
    def __init__(self, bal,acc):
      self.balance=bal
      self.account_no=acc

    def debit(self, amount):
         self.balance -=amount
         print("rs",amount, "was debited")
         print("total balance=",self.get_balance())

    def credit(self, amount):
         self.balance +=amount
         print("rs",amount, "was credited")
         print("total balance=",self.get_balance())
         
    def get_balance(self):
       return self.balance

s1 = Account(5000000,852369741)
s1.debit(1000)
s1.credit(500)
  
    