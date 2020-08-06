#include "group.h"
#include "knownledge.h"
class IdGroup {
private:
    Group* id;
    vector<IdGroup> list_of_sub_group;
public:
    IdGroup(const Group& grp);
    Knownledge get_knownledge();
};