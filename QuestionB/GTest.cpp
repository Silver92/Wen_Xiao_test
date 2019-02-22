//
// Created by Silver on 2019-02-20.
//

#include "gtest/gtest.h"
#include "library.h"

TEST(Test1, VersionHasNoContent){
    VersionComp v;
    string s1;
    string s2;

    s1 = "";
    s2 = "1.0";
    EXPECT_STREQ((v.Exerption()).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.0";
    s2 = "";
    EXPECT_STREQ((v.Exerption()).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "";
    s2 = "";
    EXPECT_STREQ((v.Exerption()).c_str(), (v.VersionCompare(s1, s2)).c_str());
}

TEST(Test1, VersionHasSameLengths){
    VersionComp v;
    string s1;
    string s2;

    s1 = "1.0";
    s2 = "1.0";
    EXPECT_STREQ((v.EqualExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "2.0";
    s2 = "1.0";
    EXPECT_STREQ((v.GreaterExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.0";
    s2 = "2.0";
    EXPECT_STREQ((v.GreaterExp(s2, s1)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1";
    s2 = "1.1";
    EXPECT_STREQ((v.EqualExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1";
    s2 = "1.0";
    EXPECT_STREQ((v.GreaterExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1";
    s2 = "1.2";
    EXPECT_STREQ((v.GreaterExp(s2, s1)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.0";
    s2 = "1.1.0";
    EXPECT_STREQ((v.EqualExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.1";
    s2 = "1.1.0";
    EXPECT_STREQ((v.GreaterExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.1";
    s2 = "1.1.2";
    EXPECT_STREQ((v.GreaterExp(s2, s1)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.1.1";
    s2 = "1.1.1.1";
    EXPECT_STREQ((v.EqualExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.1.2";
    s2 = "1.1.1.1";
    EXPECT_STREQ((v.GreaterExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.1.1";
    s2 = "1.1.1.2";
    EXPECT_STREQ((v.GreaterExp(s2, s1)).c_str(), (v.VersionCompare(s1, s2)).c_str());
}

TEST(Test1, VersionHasDifferentLengths){
    VersionComp v;
    string s1;
    string s2;

    s1 = "2.0";
    s2 = "1.0.3";
    EXPECT_STREQ((v.GreaterExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.0";
    s2 = "1.0.3";
    EXPECT_STREQ((v.GreaterExp(s2, s1)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1";
    s2 = "1.0.3";
    EXPECT_STREQ((v.GreaterExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.0";
    s2 = "1.1.3";
    EXPECT_STREQ((v.GreaterExp(s2, s1)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.2";
    s2 = "1.0";
    EXPECT_STREQ((v.GreaterExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.2";
    s2 = "1.1";
    EXPECT_STREQ((v.GreaterExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "2.1.2";
    s2 = "1.2";
    EXPECT_STREQ((v.GreaterExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.2";
    s2 = "1.2";
    EXPECT_STREQ((v.GreaterExp(s2, s1)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.0";
    s2 = "1.1";
    EXPECT_STREQ((v.EqualExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "1.1.0.0";
    s2 = "1.1";
    EXPECT_STREQ((v.EqualExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());

    s1 = "111.128";
    s2 = "111.128.0.0";
    EXPECT_STREQ((v.EqualExp(s1, s2)).c_str(), (v.VersionCompare(s1, s2)).c_str());
}

GTEST_API_ int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}