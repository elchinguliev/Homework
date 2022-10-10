
//TASK3
//
//class : Product
//	fields : id, name, description, price, discount
//	methods : ShowProduct(), GetPriceWithDiscount()

//
//class Product {
//    char* id;
//    char* name;   
//    char* description; 
//    float price;     
//    int discount;
//    float newPrice;
//public:
//    Product()
//    {
//        SetName(nullptr);
//        SetDescription(nullptr);
//        price = 0;
//        discount = 0;
//        newPrice = 0;
//    }
//    Product(const float& price) {
//        SetName(nullptr);
//        SetPrice(price);
//        SetName(nullptr);
//        SetDescription(nullptr);
//    }
//    Product(const int& discount) {
//        SetDiscount(discount);
//        SetPrice(price);
//        SetName(nullptr);
//        SetDescription(nullptr);
//    }
//    Product(const char* name) {
//        SetName(nullptr);
//        SetPrice(0);
//        SetDescription(nullptr);
//        SetDiscount(0);
//    }
//
//    Product(const char* name, const char* description, const float& price, const int& discount) { 
//
//        SetName(name);
//        SetDescription(description);
//        SetPrice(price);
//        SetDiscount(discount);
//   
//    }
//    char* GetName() {
//        return name;
//    }
//    char* GetDescription() {
//        return description;
//    }
//    float GetPrice() {
//        return price;
//    }
//    int GetDiscount() {
//        return discount;
//    }
//
//    float GetPriceWithDiscount() {
//        newPrice = price-(price * discount / 100);
//        return newPrice;
//    }
//    void SetName(const char* n) {
//        if (n != nullptr) {
//            int l = strlen(n);
//            name = new char[l + 1]{};
//            strcpy_s(name, l + 1, n);
//        }
//    }
//    void SetDescription(const char* d) {
//        if (d != nullptr) {
//            int l = strlen(d);
//            description = new char[l + 1]{};
//            strcpy_s(description, l + 1, d);
//        }
//    }
//    void SetPrice(const float& p) {
//        if (p > 0) {
//            price = p;
//        }
//        else {
//            cout << "Price should be more than 0" << endl;
//        }
//    }
//
//    void SetDiscount(const int& d) {
//        if (d > 0) {
//            discount = d;
//        }
//        else {
//            cout << "Discount should be more than 0" << endl;
//        }
//    }
//    
//    void SetNewPrice(const float& np) {
//        if (np>0)
//        {
//            newPrice = np;
//        }
//        else
//        {
//            cout << "Discount is invalid" << endl;
//        }
//    }
//    void Show() {
//        cout << "            PRODUCT INFO           " << endl;
//        if (GetName() != nullptr)
//            cout << "Name : " << GetName() << endl;
//        if (GetDescription() != nullptr)
//            cout << "Description : " << GetDescription() << endl;
//        if (GetPrice() > 0)
//            cout << "Price : " << GetPrice()<<" qepik" << endl;
//        if (GetDiscount() > 0)
//            cout << "Discount : " << GetDiscount()<<" %" << endl;
//        if (GetPriceWithDiscount() > 0)
//            cout << "New price after discount : " << GetPriceWithDiscount()<<" qepik" << endl;
//
//    }
//    ~Product()
//    {
//        delete[]name;
//        delete[]description;
//    }
//};
//void main() {
//    Product p("Bread","White , 500 gr",0.70,10);
//    p.Show();
//
//}