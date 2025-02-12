
#include <exception>
#include <iostream>
#include <vector>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "bankserver.hpp"


using ::testing::_;
using ::testing::AtLeast;
using ::testing::Exactly;
using ::testing::Gt;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

//-----------------------------------------------------------------------------
class MockBankServer : public BankServer {
 public:
  MOCK_METHOD(void, Connect, (), (override));
  MOCK_METHOD(void, Disconnect, (), (override));
  MOCK_METHOD(void, Credit, (int, int), (override));
  MOCK_METHOD(void, Debit, (int, int), (override));
  MOCK_METHOD(bool, DoubleTransaction, (int, int, int), (override));
  MOCK_METHOD(int, GetBalance, (int), (const, override));
};