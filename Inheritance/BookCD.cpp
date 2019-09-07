class Book : public Publication
{
	int page_count;
    string author;
    public: Book(string t,int p,int p_count, string auth)
    {
    	title= t;
        price= p;
        page_count= p_count;
        author= auth;
    }
    void putdata()
    {
    	cout<<"Book Title "<<"\""<<title<<"\""<<", written by "<<"\""<<author<<"\""<<" has "<<page_count<<" pages and of "<<price<<" rupees.";
    }
};

class CD : public Publication
{
	int length;
    public: CD(string t, int p, int l)
    {
    	title=t;
        price=p;
        length=l;
    }
    void putdata()
    {
    cout<<"\nCD Title "<<"\""<<title<<"\""<<", is of "<<length<<" minutes length"<<" and of "<<price<<" rupees.";
    }
};