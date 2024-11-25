class Bank:
    bank_name='BOI'
    rate_of_interest=12.25
   
    def simple_interest(self,prin,n):
        self.principle=prin
        self.number_years=n
    @staticmethod
    def calculate_simple_interest(prin,n):
        si=(prin*n*Bank.rate_of_interest)/100
        print(si)

prin=float(input("enter principle amount:"))
n=int(input("enter number of the years:"))
Bank.calculate_simple_interest(prin,n)
