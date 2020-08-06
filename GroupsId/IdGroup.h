#include "group.h"
#include "knownledg.h"
class IdGroup {
private:
    Group* id;
    Knownledg knowledge;
public:
    IdGroup(const Group& grp);
    void get_knownledg();
};