
#include <iostream>
#include <fstream>
#include <map>
#include <memory>
#include <functional>
#include <string>
#include <unordered_map>

class www
{
    public:
    www() : m_get_config(nullptr) { std::cout << "www\n"; }
private:
    std::function<const int*(void)> m_get_config; };

int main()
{

    auto w2 = new www();
    delete w2;

    return 0;
}
