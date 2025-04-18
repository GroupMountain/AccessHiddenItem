#include "mod/Entry.h"
#include <gmlib/mod/item/CustomCreativeItemRegistry.h>
#include <gmlib/mod/item/CustomItemRegistry.h>
#include <ll/api/Config.h>
#include <ll/api/mod/RegisterHelper.h>

namespace gm {

Entry& Entry::getInstance() {
    static Entry instance;
    return instance;
}

bool Entry::load() { return true; }

bool Entry::enable() {
    mConfig.emplace();
    if (!ll::config::loadConfig(*mConfig, getSelf().getConfigDir() / u8"config.json")) {
        ll::config::saveConfig(*mConfig, getSelf().getConfigDir() / u8"config.json");
    }
    auto& registry = gmlib::mod::CustomCreativeItemRegistry::getInstance();
    for (auto& item : mConfig->items) {
        registry.registerCreativeItem(::ItemInstance(item), CreativeItemCategory::Nature);
    }
    getSelf().getLogger().info("AccessHiddenItem Loaded!");
    getSelf().getLogger().info("Author: GroupMountain");
    return true;
}

bool Entry::disable() { return true; }

} // namespace gm

LL_REGISTER_MOD(gm::Entry, gm::Entry::getInstance());
