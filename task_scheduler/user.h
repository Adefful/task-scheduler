#include "pack.h"
#include <vector>
#include "GroupsId\IdPack.h"

class User {
private:
    std::vector<IdPack> list_of_packs;
public: 
    std::string name;
    void connect(IdPack pck);
};