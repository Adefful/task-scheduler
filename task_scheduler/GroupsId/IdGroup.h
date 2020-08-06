#include "..\group.h"
#include "..\knownledge.h"
class IdGroup {
private:
    Group* id;
    std::vector<IdGroup> list_of_sub_group;
public:
    IdGroup(const Group& grp);
    IdGroup();
    Knownledge get_knownledge();
};