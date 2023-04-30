#include "unity.h"
#include "stratum_api.h"

TEST_CASE("Check can parse json", "[mining.notify]")
{
    const char * json_string = "{\"id\":null,\"method\":\"mining.notify\",\"params\":"
        "[\"1b4c3d9041\","
        "\"ef4b9a48c7986466de4adc002f7337a6e121bc43000376ea0000000000000000\","
        "\"01000000010000000000000000000000000000000000000000000000000000000000000000ffffffff4b03a5020cfabe6d6d379ae882651f6469f2ed6b8b40a4f9a4b41fd838a3ad6de8cba775f4e8f1d3080100000000000000\","
        "\"41903d4c1b2f736c7573682f0000000003ca890d27000000001976a9147c154ed1dc59609e3d26abb2df2ea3d587cd8c4188ac00000000000000002c6a4c2952534b424c4f434b3a4cb4cb2ddfc37c41baf5ef6b6b4899e3253a8f1dfc7e5dd68a5b5b27005014ef0000000000000000266a24aa21a9ed5caa249f1af9fbf71c986fea8e076ca34ae3514fb2f86400561b28c7b15949bf00000000\","
        "[\"ae23055e00f0f697cc3640124812d96d4fe8bdfa03484c1c638ce5a1c0e9aa81\",\"980fb87cb61021dd7afd314fcb0dabd096f3d56a7377f6f320684652e7410a21\",\"a52e9868343c55ce405be8971ff340f562ae9ab6353f07140d01666180e19b52\",\"7435bdfa004e603953b2ed39f118803934d9cf17b06d979ceb682f2251bafac2\",\"2a91f061a22d27cb8f44eea79938fb241ebeb359891aa907f05ffde7ed44e52e\",\"302401f80eb5e958155135e25200bb8ea181ad2d05e804a531c7314d86403cdc\",\"318ecb6161eb9b4cfd802bd730e2d36c167ddf102e70aa7b4158e2870dd47392\",\"1114332a9858e0cf84b2425bb1e59eaabf91dd102d114aa443d57fc1b3beb0c9\",\"f43f38095c810613ed795a44d9fab02ff25269706f454885db9be05cdf9c06e1\",\"3e2fc26b27fddc39668b59099cd9635761bb72ed92404204e12bdff08b16fb75\",\"463c19427286342120039a83218fa87ce45448e246895abac11fff0036076758\",\"03d287f655813e540ddb9c4e7aeb922478662b0f5d8e9d0cbd564b20146bab76\"],"
        "\"20000004\",\"1705c739\",\"64495522\",false]}";
    stratum_message message = parse_stratum_notify_message(json_string);
    TEST_ASSERT_EQUAL(MINING_NOTIFY, message.method);
}