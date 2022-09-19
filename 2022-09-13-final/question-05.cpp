#include <utility>

class Passwd {
private:
    char *pwd;
public:
    Passwd() = default;

    explicit Passwd(char *p) : pwd(p) {
    }

    void setPasswd(char *p) {
        pwd = p;
    }
};

class Person {
protected:
    char *nm;
public:
    Person() = default;

    explicit Person(char *nm) : nm(nm) {
    }

    char *getName() {
        return nm;
    }

    virtual void print() = 0;
};

class Bankaccount;

void check();

class Customer : public Person {
private:
    static int len;
    Bankaccount *b{};
public:
    friend void check() {
        // todo
    }

    explicit Customer(char *nm) : Person(nm) {}

    static int getpasswdlen() {
        // todo
    }

    void print() {
        // todo
    }

    void checkPasswd() {
        // todo
    }
};

class Company {
protected:
    float prft;
public:
    Company() = default;

    explicit Company(float pr) : prft(pr) {
    }

    float getProfit() {
        return prft;
    }
};

class Bankaccount {
private:
    float tot{};
    Customer hld;
public:
    explicit Bankaccount(Customer c) {
        hld = std::move(c);
    }

    void deposit(float amt) {
        tot += amt;
    }

    float getTotal() const {
        return tot;
    }
};

class Bank : public Company {
private:
    Bankaccount *actlst;
public:
    explicit Bank(float prft) {
        // todo
    }

    void addAccount(const Bankaccount &b) {
        // todo
    }
};

int main() {
    Customer mycust("xyz");
    Bank b(1000);
    b.addAccount(Bankaccount(mycust));
    return 0;
}
