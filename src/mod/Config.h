#pragma once
#include <string>
#include <vector>

// 这里用小写，保持和Addon一致
enum class CreativeCategory {
    construction = 1,
    nature       = 2,
    equipment    = 3,
    items        = 4,
};

struct Config {
    int version = 2;

    struct ItemGroup {
        std::string      name;
        std::string      icon;
        CreativeCategory category;
    };

    std::vector<ItemGroup> extra_groups = {
        ItemGroup{
                  .name     = "itemGroup.name.lightBlock",
                  .icon     = "minecraft:light_block_15",
                  .category = CreativeCategory::nature
        },
    };

    struct ItemEntry {
        std::string      type;
        CreativeCategory category;
        std::string      group;
        std::string      nbt;
    };

    std::vector<ItemEntry> creative_items = {
        ItemEntry{.type = "minecraft:filled_map",                           .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:npc_spawn_egg",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.mobEgg",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:agent_spawn_egg",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.mobEgg",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:ender_dragon_spawn_egg",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.mobEgg",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:wither_spawn_egg",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.mobEgg",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:spawn_egg",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.mobEgg",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:written_book",                         .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:command_block_minecart",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:suspicious_stew",                      .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:board",                                .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:lodestone_compass",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_0",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_1",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_2",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_3",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_4",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_5",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_6",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_7",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_8",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_9",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_10",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_11",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_12",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_13",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_14",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:light_block_15",
                  .category = CreativeCategory::nature,
                  .group    = "itemGroup.name.lightBlock",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:chalkboard",                           .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:client_request_placeholder_block",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:structure_void",                       .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:border_block",                         .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:allow",                                .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:deny",                                 .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:barrier",                              .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:structure_block",                      .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:jigsaw",                               .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:command_block",                        .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:chain_command_block",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:repeating_command_block",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:portal",                               .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:end_portal",                           .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:end_gateway",                          .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:invisible_bedrock",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:camera",                               .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:flowing_water",                        .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:water",                                .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:flowing_lava",                         .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:lava",                                 .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:fire",                                 .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:soul_fire",                            .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:frosted_ice",                          .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:info_update",                          .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:info_update2",                         .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:reserved6",                            .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:stonecutter",                          .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:glowingobsidian",                      .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:netherreactor",                        .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:daylight_detector_inverted",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:lit_furnace",                          .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:lit_smoker",                           .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:lit_blast_furnace",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:lit_redstone_ore",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:lit_deepslate_redstone_ore",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:cocoa",                                .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:standing_sign",                        .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:wall_sign",                            .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:spruce_standing_sign",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:spruce_wall_sign",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:birch_standing_sign",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:birch_wall_sign",                      .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:jungle_standing_sign",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:jungle_wall_sign",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:acacia_standing_sign",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:acacia_wall_sign",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:darkoak_standing_sign",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:darkoak_wall_sign",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:item.bed",                             .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.wooden_door",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.iron_door",                       .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.spruce_door",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.birch_door",                      .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.jungle_door",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.acacia_door",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:item.dark_oak_door",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:redstone_wire",                        .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:unlit_redstone_torch",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:lit_redstone_lamp",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:unpowered_comparator",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:powered_comparator",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:pumpkin_stem",                         .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:melon_stem",                           .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.kelp",                            .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:bamboo_sapling",                       .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:sticky_piston_arm_collision",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:piston_arm_collision",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:unpowered_repeater",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:powered_repeater",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:wall_banner",                          .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:moving_block",                         .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:double_stone_slab",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:double_wooden_slab",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:double_stone_block_slab2",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:double_stone_block_slab3",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:double_stone_block_slab4",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:cobbled_deepslate_double_slab",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:polished_deepslate_double_slab",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:deepslate_tile_double_slab",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{
                  .type     = "minecraft:deepslate_brick_double_slab",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:item.wheat",                           .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.cake",                            .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.nether_wart",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:item.brewing_stand",
                  .category = CreativeCategory::nature,
                  .group    = "",
                  .nbt      = "{}"
        },
        ItemEntry{.type = "minecraft:item.cauldron",                        .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:lava_cauldron",                        .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:trip_wire",                            .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.flower_pot",                      .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:carrots",                              .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:potatoes",                             .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.frame",                           .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.beetroot",                        .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:sweet_berry_bush",                     .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:item.campfire",                        .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{.type = "minecraft:bubble_column",                        .category = CreativeCategory::nature, .group = "", .nbt = "{}"},
        ItemEntry{
                  .type     = "minecraft:netherite_sword",
                  .category = CreativeCategory::equipment,
                  .group    = "itemGroup.name.sword",
                  .nbt = "{\"Unbreakable\":1b,\"display\":{\"Lore\":[\"§r§9不可破坏§r\",\"§r§9自定义创造模式32K物品示例§r\","
                   "\"§r§9具体配置方法请参见默认配置文件末尾\"],\"Name\":\"§r§d32K下界合金剑§r\"},\"ench\":[{\"id\":9s,"
                   "\"lvl\":32767s},{\"id\":13s,\"lvl\":32767s},{\"id\":14s,\"lvl\":100s},{\"id\":17s,\"lvl\":32767s},{"
                   "\"id\":12s,\"lvl\":32767s},{\"id\":26s,\"lvl\":32767s},{\"id\":10s,\"lvl\":32767s},{\"id\":11s,"
                   "\"lvl\":32767s}],\"keep_on_death\":1b}"
        },
    };
};