#define BOOST_TEST_MODULE Suite_example
#include <boost/test/unit_test.hpp>
#include <memory>
#include "../TileEditor_main/Rom/RomFile.h"

BOOST_AUTO_TEST_SUITE(RomFileTest)
    BOOST_AUTO_TEST_CASE(testGetRomValue) {
        std::vector<unsigned char> data = {0xff,0x00,0xff};
        auto romFile = std::unique_ptr<RomFile>(new RomFile(data));
        BOOST_CHECK_EQUAL(romFile->getValue(0,8),0xff);
    }
BOOST_AUTO_TEST_SUITE_END()