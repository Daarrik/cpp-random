class Triangle {
    private:
        double a;
        double b;
        double c;
    public:
        Triangle(double a_in, double b_in, double c_in);
        double perimeter();
};
Triangle::Triangle(double a_in, double b_in, double c_in) {a=a_in, b=b_in, c=c_in;}
double Triangle::perimeter(){return a+b+c;}

int main() {
    
}