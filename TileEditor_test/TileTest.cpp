#include <boost/test/unit_test.hpp>
#include <memory>
#include "../TileEditor_main/System/Tile.h"

BOOST_AUTO_TEST_SUITE(TileTest)
    BOOST_AUTO_TEST_CASE(testSetGet) {
        auto tile = std::unique_ptr<Tile>(new Tile(8,8));
        tile->set(1,2,3);
        tile->set(4,5,6);
        BOOST_CHECK_EQUAL(tile->get(1,2),3);
        BOOST_CHECK_EQUAL(tile->get(4,5),6);
    }
BOOST_AUTO_TEST_SUITE_END()