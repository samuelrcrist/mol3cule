#include <string>

class listObject {
    public:
        void new(std::string item, bool completed) {
            this->item = item;
            this->completed = completed;
        }
    private:
        std::string item;
        bool completed;
};
