#include "mod/Entry.h"
#include "mod/Config.h"
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
    auto   path = getSelf().getConfigDir() / u8"config.json";
    Config config;
    try {
        ll::config::loadConfig(config, path);
    } catch (...) {}
    ll::config::saveConfig(config, path);

    auto& registry = gmlib::mod::CustomCreativeItemRegistry::getInstance();

    for (auto& group : config.extra_groups) {
        registry
            .registerCreativeGroup(group.name, ::ItemInstance(group.icon), ::CreativeItemCategory((int)group.category));
    }

    for (auto& item : config.creative_items) {
        CompoundTag* nbt = nullptr;
        if (auto userdata = ::CompoundTag::fromSnbt(item.nbt)) {
            nbt = new ::CompoundTag(*userdata);
        }
        registry.registerCreativeItem(
            ::ItemInstance(item.type, 1, 0, std::move(nbt)),
            ::CreativeItemCategory((int)item.category),
            item.group
        );
    }
    getSelf().getLogger().info("AccessHiddenItem Loaded!");
    getSelf().getLogger().info("Author: GroupMountain");
    return true;
}

bool Entry::disable() { return true; }

} // namespace gm

LL_REGISTER_MOD(gm::Entry, gm::Entry::getInstance());
