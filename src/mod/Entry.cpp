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
    auto                     path = getSelf().getConfigDir() / u8"config.json";
    Config                   config;
    std::vector<CompoundTag> snbts = {};
    try {
        ll::config::loadConfig(config, path);
        std::erase_if(config.snbts, [&](std::string const& snbt) -> bool {
            if (auto res = CompoundTag::fromSnbt(snbt); res) {
                snbts.push_back(*res);
                return false;
            }
            return true;
        });
    } catch (...) {}
    ll::config::saveConfig(config, path);

    auto& registry = gmlib::mod::CustomCreativeItemRegistry::getInstance();
    for (auto& item : config.items) {
        registry.registerCreativeItem(ItemInstance(item), CreativeItemCategory::Nature);
    }
    for (auto& snbt : config.snbts) {
        registry.registerCreativeItem(
            ItemInstance::fromTag(*CompoundTag::fromSnbt(snbt)),
            CreativeItemCategory::Nature
        );
    }

    getSelf().getLogger().info("AccessHiddenItem Loaded!");
    getSelf().getLogger().info("Author: GroupMountain");
    return true;
}

bool Entry::disable() { return true; }

} // namespace gm

LL_REGISTER_MOD(gm::Entry, gm::Entry::getInstance());
