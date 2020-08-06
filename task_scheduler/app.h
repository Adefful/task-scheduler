#include "GroupsId\IdGroup.h"
#include <pack.h>
#include <user.h>

class App {
public:
    std::vector<Pack> packs;
    std::vector<User> users;
    App();
    void load_packs();
    void load_users();
    
};