int mango(int quantity, int price)
{
    if(quantity<3){
      return quantity*price;
    }
    else if(quantity>=3){
      quantity-=quantity/3;
      return quantity*price;
    }
    return 0;
}
