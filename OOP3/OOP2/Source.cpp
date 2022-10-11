
//
//TASK3
//
//class : Product
//	fields : id, name, description, price, discount
//	methods : ShowProduct(), GetPriceWithDiscount()
// 
// 
//

class Product {
    float id;
    char* name;
    char* description;
    float price;
    int discount;
public:
    Product()
    {
        id = 0;
        SetName(nullptr);
        SetDescription(nullptr);
        price = 0;
        discount = 0;
 
    }
    Product(const float& id1,const float&p ,const float &disc) {
        SetId(id1);
        SetName(nullptr);
        SetDescription(nullptr);
        SetPrice(price);
        SetDiscount(0);
        
        
    }
    Product(const char* name) {
        SetName(name);
        SetId(0); 
        SetDescription(nullptr);
        SetPrice(0);
        SetDiscount(0);
    }


    Product(const float&id1, const float& p, const int& d, const char* name, const char* desc) {
        SetId(id1);   
        SetPrice(p);
        SetDiscount(d);
        SetName(name);
        SetDescription(desc);
     
        

    }

    float GetId() {
        return id;
    }
    char* GetName() {
        return name;
    }
    char* GetDescription() {
        return description;
    }
    float GetPrice() {
        return price;
    }
    int GetDiscount() {
        return discount;
    }

    void SetId(int id1) {
        if (id1>0)
        {
            this->id = id1;
        }
        else
        {
            cout << "Id can not be less than 0 " << endl;
        }
    }
    void SetName(const char* n) {
        if (n != nullptr) {
            int l = strlen(n);
            name = new char[l + 1]{};
            strcpy_s(name, l + 1, n);
        }
    }
    void SetDescription(const char* d) {
        if (d != nullptr) {
            int l = strlen(d);
            description = new char[l + 1]{};
            strcpy_s(description, l + 1, d);
        }
    }
    void SetPrice(const float& p) {
        if (p > 0) {
            price = p;
        }
        else {
            cout << "Price should be more than 0" << endl;
        }
    }

    void SetDiscount(const int& d) {
        if (d > 0) {
            discount = d;
        }
        else {
            cout << "Discount should be more than 0" << endl;
        }
    }


    void Show() {
        cout << "            PRODUCT INFO           " << endl;
        cout << "ID" << GetId() << endl;
        if (GetName() != nullptr)
            cout << "Name : " << GetName() << endl;
        if (GetDescription() != nullptr)
            cout << "Description : " << GetDescription() << endl;
        if (GetPrice() > 0)
            cout << "Price : " << GetPrice() <<"manat" << endl;
        if (GetDiscount() > 0)
            cout << "Discount : " << GetDiscount() << " %" << endl;


    }
    ~Product()
    {
        delete[]name;
        delete[]description;
    }
};

class Stock
{
private:
    char* adress;
    Product* products;
    int product_count;

    void SetCount(int count) {
        if (count > 0) {
            this->product_count = count;
        }
    }

public:

    Stock(const char* adress, Product* products, int product_count) {
        SetAdress(adress);
        SetCount(product_count);
        SetProducts(products);
    }

    Product* GetProducts() {
        return products;
    }

    char* GetAdress() {
        return adress;
    }

    int GetCount() {
        return product_count;
    }

    void SetAdress(const char* adress) {
        if (adress != nullptr) {
            int l = strlen(adress);
            this->adress = new char[l + 1]{};
            strcpy_s(this->adress, l + 1, adress);
        }
    }

    void SetProducts(Product* newproducts) {
        this->products = new Product[product_count]{};
        for (size_t i = 0; i < product_count; i++)
        {
            products[i].SetId(newproducts[i].GetId());
            products[i].SetName(newproducts[i].GetName());
            products[i].SetDescription(newproducts[i].GetDescription());
            products[i].SetPrice(newproducts[i].GetPrice());
            products[i].SetDiscount(newproducts[i].GetDiscount());
        }
    }

    void Show() {
        for (size_t i = 0; i < product_count; i++)
        {
            products[i].Show();
        }
    }

    ~Stock() {
        delete[]adress;
        delete[]products;
    }

};
void main() {

	Product products[3]
	{
		Product(1, 1500, 10, "Iphone 12", "4/64"),
		Product(2, 1300, 20, "Samsung Galaxy A73", "8/128"),
		Product(3, 750, 30, "Honor 8X", "6/128")
	};

	Stock s("Neriman Nerimanov", products, 3);
	s.Show();


}

