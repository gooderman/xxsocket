/* This file is generated by pcode_autog-1.16.6
** Copyright(c) HALX99, ALL RIGHTS RESERVED.
**
** Purpose: contains basic structures for protocol
**
*/
#ifndef _PCODE_AUTOG_CLIENT_STRUCTURES_H_
#define _PCODE_AUTOG_CLIENT_STRUCTURES_H_


#include "pcode_autog_client_includes.h"
namespace structures {

struct UserInfo {
    uint32_t                user_id;
    std::string             user_name;
    uint32_t                equip_id;
    uint32_t                hero_id;
    uint16_t                hero_lv;
    uint32_t                hero_hp;
    uint32_t                hero_mp;
};

};



#endif

