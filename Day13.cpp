// Write your MyBook class here
class MyBook : public Book {
  public:
    MyBook(
        string t,
        string a,
        int p
    ) :
        Book(t,a),
        price(p)
    {
        
    }
    
    virtual
    void
    display(
        void
    ) override {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
    //   Class Constructor
    
    private:
    int price;
};
    
   
