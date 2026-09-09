using Data = short;

union Pack {
    struct {
        Data data[4];
    } part;

    long long all;
};

class Packager
{
private:
    Data *packager;    
    int max;

public:
    Packager(int max);
    ~Packager();
    Data& operator[](const unsigned index);    
    Pack send();
};
