#include "IdGroup.h"

Knownledge IdGroup::get_knownledge() {
    Knownledge kn(0);
    for(auto elemenet_by_list : this->list_of_sub_group) {
        kn.level += elemenet_by_list.get_knownledge().level;
    }
    kn.level = kn.level / list_of_sub_group.size();
    return kn;
}