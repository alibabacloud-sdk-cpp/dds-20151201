// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DDS20151201_H_
#define ALIBABACLOUD_DDS20151201_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dds20151201 {
class AllocateNodePrivateNetworkAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> zoneId{};

  AllocateNodePrivateNetworkAddressRequest() {}

  explicit AllocateNodePrivateNetworkAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~AllocateNodePrivateNetworkAddressRequest() = default;
};
class AllocateNodePrivateNetworkAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocateNodePrivateNetworkAddressResponseBody() {}

  explicit AllocateNodePrivateNetworkAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AllocateNodePrivateNetworkAddressResponseBody() = default;
};
class AllocateNodePrivateNetworkAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllocateNodePrivateNetworkAddressResponseBody> body{};

  AllocateNodePrivateNetworkAddressResponse() {}

  explicit AllocateNodePrivateNetworkAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AllocateNodePrivateNetworkAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateNodePrivateNetworkAddressResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateNodePrivateNetworkAddressResponse() = default;
};
class AllocatePublicNetworkAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  AllocatePublicNetworkAddressRequest() {}

  explicit AllocatePublicNetworkAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~AllocatePublicNetworkAddressRequest() = default;
};
class AllocatePublicNetworkAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocatePublicNetworkAddressResponseBody() {}

  explicit AllocatePublicNetworkAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AllocatePublicNetworkAddressResponseBody() = default;
};
class AllocatePublicNetworkAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllocatePublicNetworkAddressResponseBody> body{};

  AllocatePublicNetworkAddressResponse() {}

  explicit AllocatePublicNetworkAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AllocatePublicNetworkAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocatePublicNetworkAddressResponseBody>(model1);
      }
    }
  }


  virtual ~AllocatePublicNetworkAddressResponse() = default;
};
class CheckCloudResourceAuthorizedRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> targetRegionId{};

  CheckCloudResourceAuthorizedRequest() {}

  explicit CheckCloudResourceAuthorizedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (targetRegionId) {
      res["TargetRegionId"] = boost::any(*targetRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("TargetRegionId") != m.end() && !m["TargetRegionId"].empty()) {
      targetRegionId = make_shared<string>(boost::any_cast<string>(m["TargetRegionId"]));
    }
  }


  virtual ~CheckCloudResourceAuthorizedRequest() = default;
};
class CheckCloudResourceAuthorizedResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> authorizationState{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleArn{};

  CheckCloudResourceAuthorizedResponseBody() {}

  explicit CheckCloudResourceAuthorizedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationState) {
      res["AuthorizationState"] = boost::any(*authorizationState);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationState") != m.end() && !m["AuthorizationState"].empty()) {
      authorizationState = make_shared<long>(boost::any_cast<long>(m["AuthorizationState"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
  }


  virtual ~CheckCloudResourceAuthorizedResponseBody() = default;
};
class CheckCloudResourceAuthorizedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckCloudResourceAuthorizedResponseBody> body{};

  CheckCloudResourceAuthorizedResponse() {}

  explicit CheckCloudResourceAuthorizedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckCloudResourceAuthorizedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckCloudResourceAuthorizedResponseBody>(model1);
      }
    }
  }


  virtual ~CheckCloudResourceAuthorizedResponse() = default;
};
class CheckRecoveryConditionRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> databaseNames{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> sourceDBInstance{};

  CheckRecoveryConditionRequest() {}

  explicit CheckRecoveryConditionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (databaseNames) {
      res["DatabaseNames"] = boost::any(*databaseNames);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (sourceDBInstance) {
      res["SourceDBInstance"] = boost::any(*sourceDBInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("DatabaseNames") != m.end() && !m["DatabaseNames"].empty()) {
      databaseNames = make_shared<string>(boost::any_cast<string>(m["DatabaseNames"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SourceDBInstance") != m.end() && !m["SourceDBInstance"].empty()) {
      sourceDBInstance = make_shared<string>(boost::any_cast<string>(m["SourceDBInstance"]));
    }
  }


  virtual ~CheckRecoveryConditionRequest() = default;
};
class CheckRecoveryConditionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<bool> isValid{};
  shared_ptr<string> requestId{};

  CheckRecoveryConditionResponseBody() {}

  explicit CheckRecoveryConditionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (isValid) {
      res["IsValid"] = boost::any(*isValid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("IsValid") != m.end() && !m["IsValid"].empty()) {
      isValid = make_shared<bool>(boost::any_cast<bool>(m["IsValid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckRecoveryConditionResponseBody() = default;
};
class CheckRecoveryConditionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckRecoveryConditionResponseBody> body{};

  CheckRecoveryConditionResponse() {}

  explicit CheckRecoveryConditionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckRecoveryConditionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckRecoveryConditionResponseBody>(model1);
      }
    }
  }


  virtual ~CheckRecoveryConditionResponse() = default;
};
class CreateBackupRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupMethod{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  CreateBackupRequest() {}

  explicit CreateBackupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CreateBackupRequest() = default;
};
class CreateBackupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> requestId{};

  CreateBackupResponseBody() {}

  explicit CreateBackupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateBackupResponseBody() = default;
};
class CreateBackupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBackupResponseBody> body{};

  CreateBackupResponse() {}

  explicit CreateBackupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateBackupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBackupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBackupResponse() = default;
};
class CreateDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountPassword{};
  shared_ptr<string> autoRenew{};
  shared_ptr<string> backupId{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<long> DBInstanceStorage{};
  shared_ptr<string> databaseNames{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> networkType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> period{};
  shared_ptr<string> readonlyReplicas{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicationFactor{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> srcDBInstanceId{};
  shared_ptr<string> storageEngine{};
  shared_ptr<string> storageType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateDBInstanceRequest() {}

  explicit CreateDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceStorage) {
      res["DBInstanceStorage"] = boost::any(*DBInstanceStorage);
    }
    if (databaseNames) {
      res["DatabaseNames"] = boost::any(*databaseNames);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (readonlyReplicas) {
      res["ReadonlyReplicas"] = boost::any(*readonlyReplicas);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicationFactor) {
      res["ReplicationFactor"] = boost::any(*replicationFactor);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (srcDBInstanceId) {
      res["SrcDBInstanceId"] = boost::any(*srcDBInstanceId);
    }
    if (storageEngine) {
      res["StorageEngine"] = boost::any(*storageEngine);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceStorage") != m.end() && !m["DBInstanceStorage"].empty()) {
      DBInstanceStorage = make_shared<long>(boost::any_cast<long>(m["DBInstanceStorage"]));
    }
    if (m.find("DatabaseNames") != m.end() && !m["DatabaseNames"].empty()) {
      databaseNames = make_shared<string>(boost::any_cast<string>(m["DatabaseNames"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("ReadonlyReplicas") != m.end() && !m["ReadonlyReplicas"].empty()) {
      readonlyReplicas = make_shared<string>(boost::any_cast<string>(m["ReadonlyReplicas"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicationFactor") != m.end() && !m["ReplicationFactor"].empty()) {
      replicationFactor = make_shared<string>(boost::any_cast<string>(m["ReplicationFactor"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SrcDBInstanceId") != m.end() && !m["SrcDBInstanceId"].empty()) {
      srcDBInstanceId = make_shared<string>(boost::any_cast<string>(m["SrcDBInstanceId"]));
    }
    if (m.find("StorageEngine") != m.end() && !m["StorageEngine"].empty()) {
      storageEngine = make_shared<string>(boost::any_cast<string>(m["StorageEngine"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBInstanceRequest() = default;
};
class CreateDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateDBInstanceResponseBody() {}

  explicit CreateDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDBInstanceResponseBody() = default;
};
class CreateDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBInstanceResponseBody> body{};

  CreateDBInstanceResponse() {}

  explicit CreateDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBInstanceResponse() = default;
};
class CreateNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeClass{};
  shared_ptr<long> nodeStorage{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> readonlyReplicas{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<bool> shardDirect{};

  CreateNodeRequest() {}

  explicit CreateNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeStorage) {
      res["NodeStorage"] = boost::any(*nodeStorage);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (readonlyReplicas) {
      res["ReadonlyReplicas"] = boost::any(*readonlyReplicas);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (shardDirect) {
      res["ShardDirect"] = boost::any(*shardDirect);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeStorage") != m.end() && !m["NodeStorage"].empty()) {
      nodeStorage = make_shared<long>(boost::any_cast<long>(m["NodeStorage"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReadonlyReplicas") != m.end() && !m["ReadonlyReplicas"].empty()) {
      readonlyReplicas = make_shared<long>(boost::any_cast<long>(m["ReadonlyReplicas"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ShardDirect") != m.end() && !m["ShardDirect"].empty()) {
      shardDirect = make_shared<bool>(boost::any_cast<bool>(m["ShardDirect"]));
    }
  }


  virtual ~CreateNodeRequest() = default;
};
class CreateNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateNodeResponseBody() {}

  explicit CreateNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateNodeResponseBody() = default;
};
class CreateNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNodeResponseBody> body{};

  CreateNodeResponse() {}

  explicit CreateNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNodeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNodeResponse() = default;
};
class CreateNodeBatchRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> fromApp{};
  shared_ptr<string> nodesInfo{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<bool> shardDirect{};

  CreateNodeBatchRequest() {}

  explicit CreateNodeBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fromApp) {
      res["FromApp"] = boost::any(*fromApp);
    }
    if (nodesInfo) {
      res["NodesInfo"] = boost::any(*nodesInfo);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (shardDirect) {
      res["ShardDirect"] = boost::any(*shardDirect);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FromApp") != m.end() && !m["FromApp"].empty()) {
      fromApp = make_shared<string>(boost::any_cast<string>(m["FromApp"]));
    }
    if (m.find("NodesInfo") != m.end() && !m["NodesInfo"].empty()) {
      nodesInfo = make_shared<string>(boost::any_cast<string>(m["NodesInfo"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ShardDirect") != m.end() && !m["ShardDirect"].empty()) {
      shardDirect = make_shared<bool>(boost::any_cast<bool>(m["ShardDirect"]));
    }
  }


  virtual ~CreateNodeBatchRequest() = default;
};
class CreateNodeBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateNodeBatchResponseBody() {}

  explicit CreateNodeBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateNodeBatchResponseBody() = default;
};
class CreateNodeBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNodeBatchResponseBody> body{};

  CreateNodeBatchResponse() {}

  explicit CreateNodeBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNodeBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNodeBatchResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNodeBatchResponse() = default;
};
class CreateShardingDBInstanceRequestConfigServer : public Darabonba::Model {
public:
  shared_ptr<string> class_{};
  shared_ptr<long> storage{};

  CreateShardingDBInstanceRequestConfigServer() {}

  explicit CreateShardingDBInstanceRequestConfigServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (storage) {
      res["Storage"] = boost::any(*storage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storage = make_shared<long>(boost::any_cast<long>(m["Storage"]));
    }
  }


  virtual ~CreateShardingDBInstanceRequestConfigServer() = default;
};
class CreateShardingDBInstanceRequestMongos : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  CreateShardingDBInstanceRequestMongos() {}

  explicit CreateShardingDBInstanceRequestMongos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~CreateShardingDBInstanceRequestMongos() = default;
};
class CreateShardingDBInstanceRequestReplicaSet : public Darabonba::Model {
public:
  shared_ptr<string> class_{};
  shared_ptr<long> readonlyReplicas{};
  shared_ptr<long> storage{};

  CreateShardingDBInstanceRequestReplicaSet() {}

  explicit CreateShardingDBInstanceRequestReplicaSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (readonlyReplicas) {
      res["ReadonlyReplicas"] = boost::any(*readonlyReplicas);
    }
    if (storage) {
      res["Storage"] = boost::any(*storage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("ReadonlyReplicas") != m.end() && !m["ReadonlyReplicas"].empty()) {
      readonlyReplicas = make_shared<long>(boost::any_cast<long>(m["ReadonlyReplicas"]));
    }
    if (m.find("Storage") != m.end() && !m["Storage"].empty()) {
      storage = make_shared<long>(boost::any_cast<long>(m["Storage"]));
    }
  }


  virtual ~CreateShardingDBInstanceRequestReplicaSet() = default;
};
class CreateShardingDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountPassword{};
  shared_ptr<string> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<CreateShardingDBInstanceRequestConfigServer>> configServer{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> hiddenZoneId{};
  shared_ptr<vector<CreateShardingDBInstanceRequestMongos>> mongos{};
  shared_ptr<string> networkType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> period{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<CreateShardingDBInstanceRequestReplicaSet>> replicaSet{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> secondaryZoneId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> srcDBInstanceId{};
  shared_ptr<string> storageEngine{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateShardingDBInstanceRequest() {}

  explicit CreateShardingDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (configServer) {
      vector<boost::any> temp1;
      for(auto item1:*configServer){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigServer"] = boost::any(temp1);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (hiddenZoneId) {
      res["HiddenZoneId"] = boost::any(*hiddenZoneId);
    }
    if (mongos) {
      vector<boost::any> temp1;
      for(auto item1:*mongos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Mongos"] = boost::any(temp1);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicaSet) {
      vector<boost::any> temp1;
      for(auto item1:*replicaSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReplicaSet"] = boost::any(temp1);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (secondaryZoneId) {
      res["SecondaryZoneId"] = boost::any(*secondaryZoneId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (srcDBInstanceId) {
      res["SrcDBInstanceId"] = boost::any(*srcDBInstanceId);
    }
    if (storageEngine) {
      res["StorageEngine"] = boost::any(*storageEngine);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConfigServer") != m.end() && !m["ConfigServer"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigServer"].type()) {
        vector<CreateShardingDBInstanceRequestConfigServer> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigServer"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateShardingDBInstanceRequestConfigServer model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configServer = make_shared<vector<CreateShardingDBInstanceRequestConfigServer>>(expect1);
      }
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("HiddenZoneId") != m.end() && !m["HiddenZoneId"].empty()) {
      hiddenZoneId = make_shared<string>(boost::any_cast<string>(m["HiddenZoneId"]));
    }
    if (m.find("Mongos") != m.end() && !m["Mongos"].empty()) {
      if (typeid(vector<boost::any>) == m["Mongos"].type()) {
        vector<CreateShardingDBInstanceRequestMongos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Mongos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateShardingDBInstanceRequestMongos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mongos = make_shared<vector<CreateShardingDBInstanceRequestMongos>>(expect1);
      }
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicaSet") != m.end() && !m["ReplicaSet"].empty()) {
      if (typeid(vector<boost::any>) == m["ReplicaSet"].type()) {
        vector<CreateShardingDBInstanceRequestReplicaSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReplicaSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateShardingDBInstanceRequestReplicaSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        replicaSet = make_shared<vector<CreateShardingDBInstanceRequestReplicaSet>>(expect1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("SecondaryZoneId") != m.end() && !m["SecondaryZoneId"].empty()) {
      secondaryZoneId = make_shared<string>(boost::any_cast<string>(m["SecondaryZoneId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SrcDBInstanceId") != m.end() && !m["SrcDBInstanceId"].empty()) {
      srcDBInstanceId = make_shared<string>(boost::any_cast<string>(m["SrcDBInstanceId"]));
    }
    if (m.find("StorageEngine") != m.end() && !m["StorageEngine"].empty()) {
      storageEngine = make_shared<string>(boost::any_cast<string>(m["StorageEngine"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateShardingDBInstanceRequest() = default;
};
class CreateShardingDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateShardingDBInstanceResponseBody() {}

  explicit CreateShardingDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateShardingDBInstanceResponseBody() = default;
};
class CreateShardingDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateShardingDBInstanceResponseBody> body{};

  CreateShardingDBInstanceResponse() {}

  explicit CreateShardingDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateShardingDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateShardingDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateShardingDBInstanceResponse() = default;
};
class DeleteDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DeleteDBInstanceRequest() {}

  explicit DeleteDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteDBInstanceRequest() = default;
};
class DeleteDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBInstanceResponseBody() {}

  explicit DeleteDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDBInstanceResponseBody() = default;
};
class DeleteDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDBInstanceResponseBody> body{};

  DeleteDBInstanceResponse() {}

  explicit DeleteDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBInstanceResponse() = default;
};
class DeleteNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DeleteNodeRequest() {}

  explicit DeleteNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteNodeRequest() = default;
};
class DeleteNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskId{};

  DeleteNodeResponseBody() {}

  explicit DeleteNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DeleteNodeResponseBody() = default;
};
class DeleteNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNodeResponseBody> body{};

  DeleteNodeResponse() {}

  explicit DeleteNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNodeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNodeResponse() = default;
};
class DescribeAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeAccountsRequest() {}

  explicit DescribeAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeAccountsRequest() = default;
};
class DescribeAccountsResponseBodyAccountsAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountStatus{};
  shared_ptr<string> characterType{};
  shared_ptr<string> DBInstanceId{};

  DescribeAccountsResponseBodyAccountsAccount() {}

  explicit DescribeAccountsResponseBodyAccountsAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountsAccount() = default;
};
class DescribeAccountsResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountsResponseBodyAccountsAccount>> account{};

  DescribeAccountsResponseBodyAccounts() {}

  explicit DescribeAccountsResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      vector<boost::any> temp1;
      for(auto item1:*account){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Account"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(vector<boost::any>) == m["Account"].type()) {
        vector<DescribeAccountsResponseBodyAccountsAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Account"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountsResponseBodyAccountsAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        account = make_shared<vector<DescribeAccountsResponseBodyAccountsAccount>>(expect1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBodyAccounts() = default;
};
class DescribeAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAccountsResponseBodyAccounts> accounts{};
  shared_ptr<string> requestId{};

  DescribeAccountsResponseBody() {}

  explicit DescribeAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        DescribeAccountsResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<DescribeAccountsResponseBodyAccounts>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAccountsResponseBody() = default;
};
class DescribeAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountsResponseBody> body{};

  DescribeAccountsResponse() {}

  explicit DescribeAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountsResponse() = default;
};
class DescribeActiveOperationTaskCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeActiveOperationTaskCountRequest() {}

  explicit DescribeActiveOperationTaskCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeActiveOperationTaskCountRequest() = default;
};
class DescribeActiveOperationTaskCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> needPop{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskCount{};

  DescribeActiveOperationTaskCountResponseBody() {}

  explicit DescribeActiveOperationTaskCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (needPop) {
      res["NeedPop"] = boost::any(*needPop);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskCount) {
      res["TaskCount"] = boost::any(*taskCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NeedPop") != m.end() && !m["NeedPop"].empty()) {
      needPop = make_shared<long>(boost::any_cast<long>(m["NeedPop"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskCount") != m.end() && !m["TaskCount"].empty()) {
      taskCount = make_shared<long>(boost::any_cast<long>(m["TaskCount"]));
    }
  }


  virtual ~DescribeActiveOperationTaskCountResponseBody() = default;
};
class DescribeActiveOperationTaskCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeActiveOperationTaskCountResponseBody> body{};

  DescribeActiveOperationTaskCountResponse() {}

  explicit DescribeActiveOperationTaskCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeActiveOperationTaskCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeActiveOperationTaskCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeActiveOperationTaskCountResponse() = default;
};
class DescribeActiveOperationTaskTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> isHistory{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeActiveOperationTaskTypeRequest() {}

  explicit DescribeActiveOperationTaskTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isHistory) {
      res["IsHistory"] = boost::any(*isHistory);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsHistory") != m.end() && !m["IsHistory"].empty()) {
      isHistory = make_shared<long>(boost::any_cast<long>(m["IsHistory"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeActiveOperationTaskTypeRequest() = default;
};
class DescribeActiveOperationTaskTypeResponseBodyTypeList : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskTypeInfoEn{};
  shared_ptr<string> taskTypeInfoZh{};

  DescribeActiveOperationTaskTypeResponseBodyTypeList() {}

  explicit DescribeActiveOperationTaskTypeResponseBodyTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskTypeInfoEn) {
      res["TaskTypeInfoEn"] = boost::any(*taskTypeInfoEn);
    }
    if (taskTypeInfoZh) {
      res["TaskTypeInfoZh"] = boost::any(*taskTypeInfoZh);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskTypeInfoEn") != m.end() && !m["TaskTypeInfoEn"].empty()) {
      taskTypeInfoEn = make_shared<string>(boost::any_cast<string>(m["TaskTypeInfoEn"]));
    }
    if (m.find("TaskTypeInfoZh") != m.end() && !m["TaskTypeInfoZh"].empty()) {
      taskTypeInfoZh = make_shared<string>(boost::any_cast<string>(m["TaskTypeInfoZh"]));
    }
  }


  virtual ~DescribeActiveOperationTaskTypeResponseBodyTypeList() = default;
};
class DescribeActiveOperationTaskTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeActiveOperationTaskTypeResponseBodyTypeList>> typeList{};

  DescribeActiveOperationTaskTypeResponseBody() {}

  explicit DescribeActiveOperationTaskTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (typeList) {
      vector<boost::any> temp1;
      for(auto item1:*typeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TypeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TypeList") != m.end() && !m["TypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TypeList"].type()) {
        vector<DescribeActiveOperationTaskTypeResponseBodyTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeActiveOperationTaskTypeResponseBodyTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        typeList = make_shared<vector<DescribeActiveOperationTaskTypeResponseBodyTypeList>>(expect1);
      }
    }
  }


  virtual ~DescribeActiveOperationTaskTypeResponseBody() = default;
};
class DescribeActiveOperationTaskTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeActiveOperationTaskTypeResponseBody> body{};

  DescribeActiveOperationTaskTypeResponse() {}

  explicit DescribeActiveOperationTaskTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeActiveOperationTaskTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeActiveOperationTaskTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeActiveOperationTaskTypeResponse() = default;
};
class DescribeAuditLogFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> roleType{};
  shared_ptr<string> securityToken{};

  DescribeAuditLogFilterRequest() {}

  explicit DescribeAuditLogFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeAuditLogFilterRequest() = default;
};
class DescribeAuditLogFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleType{};

  DescribeAuditLogFilterResponseBody() {}

  explicit DescribeAuditLogFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~DescribeAuditLogFilterResponseBody() = default;
};
class DescribeAuditLogFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditLogFilterResponseBody> body{};

  DescribeAuditLogFilterResponse() {}

  explicit DescribeAuditLogFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAuditLogFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditLogFilterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditLogFilterResponse() = default;
};
class DescribeAuditPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeAuditPolicyRequest() {}

  explicit DescribeAuditPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeAuditPolicyRequest() = default;
};
class DescribeAuditPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> logAuditStatus{};
  shared_ptr<string> requestId{};

  DescribeAuditPolicyResponseBody() {}

  explicit DescribeAuditPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logAuditStatus) {
      res["LogAuditStatus"] = boost::any(*logAuditStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogAuditStatus") != m.end() && !m["LogAuditStatus"].empty()) {
      logAuditStatus = make_shared<string>(boost::any_cast<string>(m["LogAuditStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAuditPolicyResponseBody() = default;
};
class DescribeAuditPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditPolicyResponseBody> body{};

  DescribeAuditPolicyResponse() {}

  explicit DescribeAuditPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAuditPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditPolicyResponse() = default;
};
class DescribeAuditRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> database{};
  shared_ptr<string> endTime{};
  shared_ptr<string> form{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> orderType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> startTime{};
  shared_ptr<string> user{};

  DescribeAuditRecordsRequest() {}

  explicit DescribeAuditRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeAuditRecordsRequest() = default;
};
class DescribeAuditRecordsResponseBodyItemsSQLRecord : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBName{};
  shared_ptr<string> executeTime{};
  shared_ptr<string> hostAddress{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<string> syntax{};
  shared_ptr<string> tableName{};
  shared_ptr<string> threadID{};
  shared_ptr<long> totalExecutionTimes{};

  DescribeAuditRecordsResponseBodyItemsSQLRecord() {}

  explicit DescribeAuditRecordsResponseBodyItemsSQLRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (syntax) {
      res["Syntax"] = boost::any(*syntax);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (threadID) {
      res["ThreadID"] = boost::any(*threadID);
    }
    if (totalExecutionTimes) {
      res["TotalExecutionTimes"] = boost::any(*totalExecutionTimes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("Syntax") != m.end() && !m["Syntax"].empty()) {
      syntax = make_shared<string>(boost::any_cast<string>(m["Syntax"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("ThreadID") != m.end() && !m["ThreadID"].empty()) {
      threadID = make_shared<string>(boost::any_cast<string>(m["ThreadID"]));
    }
    if (m.find("TotalExecutionTimes") != m.end() && !m["TotalExecutionTimes"].empty()) {
      totalExecutionTimes = make_shared<long>(boost::any_cast<long>(m["TotalExecutionTimes"]));
    }
  }


  virtual ~DescribeAuditRecordsResponseBodyItemsSQLRecord() = default;
};
class DescribeAuditRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAuditRecordsResponseBodyItemsSQLRecord>> SQLRecord{};

  DescribeAuditRecordsResponseBodyItems() {}

  explicit DescribeAuditRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SQLRecord) {
      vector<boost::any> temp1;
      for(auto item1:*SQLRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SQLRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SQLRecord") != m.end() && !m["SQLRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["SQLRecord"].type()) {
        vector<DescribeAuditRecordsResponseBodyItemsSQLRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SQLRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAuditRecordsResponseBodyItemsSQLRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        SQLRecord = make_shared<vector<DescribeAuditRecordsResponseBodyItemsSQLRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeAuditRecordsResponseBodyItems() = default;
};
class DescribeAuditRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAuditRecordsResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeAuditRecordsResponseBody() {}

  explicit DescribeAuditRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeAuditRecordsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeAuditRecordsResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeAuditRecordsResponseBody() = default;
};
class DescribeAuditRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditRecordsResponseBody> body{};

  DescribeAuditRecordsResponse() {}

  explicit DescribeAuditRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAuditRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditRecordsResponse() = default;
};
class DescribeAvailableEngineVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeAvailableEngineVersionRequest() {}

  explicit DescribeAvailableEngineVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeAvailableEngineVersionRequest() = default;
};
class DescribeAvailableEngineVersionResponseBodyEngineVersions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> engineVersion{};

  DescribeAvailableEngineVersionResponseBodyEngineVersions() {}

  explicit DescribeAvailableEngineVersionResponseBodyEngineVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EngineVersion"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EngineVersion"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      engineVersion = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAvailableEngineVersionResponseBodyEngineVersions() = default;
};
class DescribeAvailableEngineVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableEngineVersionResponseBodyEngineVersions> engineVersions{};
  shared_ptr<string> requestId{};

  DescribeAvailableEngineVersionResponseBody() {}

  explicit DescribeAvailableEngineVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engineVersions) {
      res["EngineVersions"] = engineVersions ? boost::any(engineVersions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EngineVersions") != m.end() && !m["EngineVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["EngineVersions"].type()) {
        DescribeAvailableEngineVersionResponseBodyEngineVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EngineVersions"]));
        engineVersions = make_shared<DescribeAvailableEngineVersionResponseBodyEngineVersions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAvailableEngineVersionResponseBody() = default;
};
class DescribeAvailableEngineVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAvailableEngineVersionResponseBody> body{};

  DescribeAvailableEngineVersionResponse() {}

  explicit DescribeAvailableEngineVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAvailableEngineVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableEngineVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableEngineVersionResponse() = default;
};
class DescribeAvailableResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbType{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourceRequest() {}

  explicit DescribeAvailableResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourceRequest() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResourceDBInstanceStorageRange : public Darabonba::Model {
public:
  shared_ptr<long> max{};
  shared_ptr<long> min{};
  shared_ptr<long> step{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResourceDBInstanceStorageRange() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResourceDBInstanceStorageRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (max) {
      res["Max"] = boost::any(*max);
    }
    if (min) {
      res["Min"] = boost::any(*min);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Max") != m.end() && !m["Max"].empty()) {
      max = make_shared<long>(boost::any_cast<long>(m["Max"]));
    }
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      min = make_shared<long>(boost::any_cast<long>(m["Min"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResourceDBInstanceStorageRange() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResourceDBInstanceStorageRange> DBInstanceStorageRange{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> instanceClassRemark{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceStorageRange) {
      res["DBInstanceStorageRange"] = DBInstanceStorageRange ? boost::any(DBInstanceStorageRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (instanceClassRemark) {
      res["InstanceClassRemark"] = boost::any(*instanceClassRemark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceStorageRange") != m.end() && !m["DBInstanceStorageRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstanceStorageRange"].type()) {
        DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResourceDBInstanceStorageRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstanceStorageRange"]));
        DBInstanceStorageRange = make_shared<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResourceDBInstanceStorageRange>(model1);
      }
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("InstanceClassRemark") != m.end() && !m["InstanceClassRemark"].empty()) {
      instanceClassRemark = make_shared<string>(boost::any_cast<string>(m["InstanceClassRemark"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResources : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource>> availableResource{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResources() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableResource) {
      vector<boost::any> temp1;
      for(auto item1:*availableResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableResource") != m.end() && !m["AvailableResource"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableResource"].type()) {
        vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableResource = make_shared<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResourcesAvailableResource>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResources() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResources> availableResources{};
  shared_ptr<string> networkTypes{};
  shared_ptr<string> nodeType{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableResources) {
      res["AvailableResources"] = availableResources ? boost::any(availableResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkTypes) {
      res["NetworkTypes"] = boost::any(*networkTypes);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableResources") != m.end() && !m["AvailableResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableResources"].type()) {
        DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableResources"]));
        availableResources = make_shared<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeTypeAvailableResources>(model1);
      }
    }
    if (m.find("NetworkTypes") != m.end() && !m["NetworkTypes"].empty()) {
      networkTypes = make_shared<string>(boost::any_cast<string>(m["NetworkTypes"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType>> supportedNodeType{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypes() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedNodeType) {
      vector<boost::any> temp1;
      for(auto item1:*supportedNodeType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedNodeType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedNodeType") != m.end() && !m["SupportedNodeType"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedNodeType"].type()) {
        vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedNodeType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedNodeType = make_shared<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypesSupportedNodeType>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypes() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypes> supportedNodeTypes{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (supportedNodeTypes) {
      res["SupportedNodeTypes"] = supportedNodeTypes ? boost::any(supportedNodeTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("SupportedNodeTypes") != m.end() && !m["SupportedNodeTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedNodeTypes"].type()) {
        DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedNodeTypes"]));
        supportedNodeTypes = make_shared<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngineSupportedNodeTypes>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEngines : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine>> supportedEngine{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEngines() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEngines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngine) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngine){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngine"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngine") != m.end() && !m["SupportedEngine"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngine"].type()) {
        vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngine"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngine = make_shared<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEnginesSupportedEngine>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEngines() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEngines> supportedEngines{};
  shared_ptr<string> version{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngines) {
      res["SupportedEngines"] = supportedEngines ? boost::any(supportedEngines->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngines") != m.end() && !m["SupportedEngines"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedEngines"].type()) {
        DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEngines model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedEngines"]));
        supportedEngines = make_shared<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersionSupportedEngines>(model1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion>> supportedEngineVersion{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersions() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngineVersion) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngineVersion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngineVersion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngineVersion") != m.end() && !m["SupportedEngineVersion"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngineVersion"].type()) {
        vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngineVersion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngineVersion = make_shared<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersionsSupportedEngineVersion>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersions() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersions> supportedEngineVersions{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (supportedEngineVersions) {
      res["SupportedEngineVersions"] = supportedEngineVersions ? boost::any(supportedEngineVersions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SupportedEngineVersions") != m.end() && !m["SupportedEngineVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedEngineVersions"].type()) {
        DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedEngineVersions"]));
        supportedEngineVersions = make_shared<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZoneSupportedEngineVersions>(model1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone>> availableZone{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZones() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZone) {
      vector<boost::any> temp1;
      for(auto item1:*availableZone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableZone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZone") != m.end() && !m["AvailableZone"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableZone"].type()) {
        vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableZone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableZone = make_shared<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZonesAvailableZone>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZones() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBType : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZones> availableZones{};
  shared_ptr<string> dbType{};

  DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBType() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableZones) {
      res["AvailableZones"] = availableZones ? boost::any(availableZones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableZones") != m.end() && !m["AvailableZones"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableZones"].type()) {
        DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableZones"]));
        availableZones = make_shared<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBTypeAvailableZones>(model1);
      }
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBType() = default;
};
class DescribeAvailableResourceResponseBodySupportedDBTypes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBType>> supportedDBType{};

  DescribeAvailableResourceResponseBodySupportedDBTypes() {}

  explicit DescribeAvailableResourceResponseBodySupportedDBTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedDBType) {
      vector<boost::any> temp1;
      for(auto item1:*supportedDBType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedDBType"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedDBType") != m.end() && !m["SupportedDBType"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedDBType"].type()) {
        vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedDBType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedDBType = make_shared<vector<DescribeAvailableResourceResponseBodySupportedDBTypesSupportedDBType>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodySupportedDBTypes() = default;
};
class DescribeAvailableResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAvailableResourceResponseBodySupportedDBTypes> supportedDBTypes{};

  DescribeAvailableResourceResponseBody() {}

  explicit DescribeAvailableResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (supportedDBTypes) {
      res["SupportedDBTypes"] = supportedDBTypes ? boost::any(supportedDBTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SupportedDBTypes") != m.end() && !m["SupportedDBTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedDBTypes"].type()) {
        DescribeAvailableResourceResponseBodySupportedDBTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedDBTypes"]));
        supportedDBTypes = make_shared<DescribeAvailableResourceResponseBodySupportedDBTypes>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBody() = default;
};
class DescribeAvailableResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAvailableResourceResponseBody> body{};

  DescribeAvailableResourceResponse() {}

  explicit DescribeAvailableResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAvailableResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponse() = default;
};
class DescribeBackupDBsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> sourceDBInstance{};

  DescribeBackupDBsRequest() {}

  explicit DescribeBackupDBsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (sourceDBInstance) {
      res["SourceDBInstance"] = boost::any(*sourceDBInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SourceDBInstance") != m.end() && !m["SourceDBInstance"].empty()) {
      sourceDBInstance = make_shared<string>(boost::any_cast<string>(m["SourceDBInstance"]));
    }
  }


  virtual ~DescribeBackupDBsRequest() = default;
};
class DescribeBackupDBsResponseBodyDatabasesDatabase : public Darabonba::Model {
public:
  shared_ptr<string> DBName{};

  DescribeBackupDBsResponseBodyDatabasesDatabase() {}

  explicit DescribeBackupDBsResponseBodyDatabasesDatabase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
  }


  virtual ~DescribeBackupDBsResponseBodyDatabasesDatabase() = default;
};
class DescribeBackupDBsResponseBodyDatabases : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupDBsResponseBodyDatabasesDatabase>> database{};

  DescribeBackupDBsResponseBodyDatabases() {}

  explicit DescribeBackupDBsResponseBodyDatabases(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      vector<boost::any> temp1;
      for(auto item1:*database){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Database"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      if (typeid(vector<boost::any>) == m["Database"].type()) {
        vector<DescribeBackupDBsResponseBodyDatabasesDatabase> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Database"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupDBsResponseBodyDatabasesDatabase model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        database = make_shared<vector<DescribeBackupDBsResponseBodyDatabasesDatabase>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupDBsResponseBodyDatabases() = default;
};
class DescribeBackupDBsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupDBsResponseBodyDatabases> databases{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeBackupDBsResponseBody() {}

  explicit DescribeBackupDBsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databases) {
      res["Databases"] = databases ? boost::any(databases->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Databases") != m.end() && !m["Databases"].empty()) {
      if (typeid(map<string, boost::any>) == m["Databases"].type()) {
        DescribeBackupDBsResponseBodyDatabases model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Databases"]));
        databases = make_shared<DescribeBackupDBsResponseBodyDatabases>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeBackupDBsResponseBody() = default;
};
class DescribeBackupDBsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupDBsResponseBody> body{};

  DescribeBackupDBsResponse() {}

  explicit DescribeBackupDBsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupDBsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupDBsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupDBsResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backupRetentionPeriod{};
  shared_ptr<long> enableBackupLog{};
  shared_ptr<long> logBackupRetentionPeriod{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> requestId{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    if (logBackupRetentionPeriod) {
      res["LogBackupRetentionPeriod"] = boost::any(*logBackupRetentionPeriod);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPeriod"]));
    }
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<long>(boost::any_cast<long>(m["EnableBackupLog"]));
    }
    if (m.find("LogBackupRetentionPeriod") != m.end() && !m["LogBackupRetentionPeriod"].empty()) {
      logBackupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["LogBackupRetentionPeriod"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBody() = default;
};
class DescribeBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupPolicyResponseBody> body{};

  DescribeBackupPolicyResponse() {}

  explicit DescribeBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPolicyResponse() = default;
};
class DescribeBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> startTime{};

  DescribeBackupsRequest() {}

  explicit DescribeBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeBackupsRequest() = default;
};
class DescribeBackupsResponseBodyBackupsBackup : public Darabonba::Model {
public:
  shared_ptr<string> backupDBNames{};
  shared_ptr<string> backupDownloadURL{};
  shared_ptr<string> backupEndTime{};
  shared_ptr<long> backupId{};
  shared_ptr<string> backupIntranetDownloadURL{};
  shared_ptr<string> backupMethod{};
  shared_ptr<string> backupMode{};
  shared_ptr<long> backupSize{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> backupType{};

  DescribeBackupsResponseBodyBackupsBackup() {}

  explicit DescribeBackupsResponseBodyBackupsBackup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupDBNames) {
      res["BackupDBNames"] = boost::any(*backupDBNames);
    }
    if (backupDownloadURL) {
      res["BackupDownloadURL"] = boost::any(*backupDownloadURL);
    }
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupIntranetDownloadURL) {
      res["BackupIntranetDownloadURL"] = boost::any(*backupIntranetDownloadURL);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupDBNames") != m.end() && !m["BackupDBNames"].empty()) {
      backupDBNames = make_shared<string>(boost::any_cast<string>(m["BackupDBNames"]));
    }
    if (m.find("BackupDownloadURL") != m.end() && !m["BackupDownloadURL"].empty()) {
      backupDownloadURL = make_shared<string>(boost::any_cast<string>(m["BackupDownloadURL"]));
    }
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<long>(boost::any_cast<long>(m["BackupId"]));
    }
    if (m.find("BackupIntranetDownloadURL") != m.end() && !m["BackupIntranetDownloadURL"].empty()) {
      backupIntranetDownloadURL = make_shared<string>(boost::any_cast<string>(m["BackupIntranetDownloadURL"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<long>(boost::any_cast<long>(m["BackupSize"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
  }


  virtual ~DescribeBackupsResponseBodyBackupsBackup() = default;
};
class DescribeBackupsResponseBodyBackups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupsResponseBodyBackupsBackup>> backup{};

  DescribeBackupsResponseBodyBackups() {}

  explicit DescribeBackupsResponseBodyBackups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backup) {
      vector<boost::any> temp1;
      for(auto item1:*backup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backup") != m.end() && !m["Backup"].empty()) {
      if (typeid(vector<boost::any>) == m["Backup"].type()) {
        vector<DescribeBackupsResponseBodyBackupsBackup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupsResponseBodyBackupsBackup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backup = make_shared<vector<DescribeBackupsResponseBodyBackupsBackup>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupsResponseBodyBackups() = default;
};
class DescribeBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBackupsResponseBodyBackups> backups{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeBackupsResponseBody() {}

  explicit DescribeBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backups) {
      res["Backups"] = backups ? boost::any(backups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backups") != m.end() && !m["Backups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Backups"].type()) {
        DescribeBackupsResponseBodyBackups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Backups"]));
        backups = make_shared<DescribeBackupsResponseBodyBackups>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeBackupsResponseBody() = default;
};
class DescribeBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBackupsResponseBody> body{};

  DescribeBackupsResponse() {}

  explicit DescribeBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupsResponse() = default;
};
class DescribeDBInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeDBInstanceAttributeRequest() {}

  explicit DescribeDBInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeRequest() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverListConfigserverAttribute : public Darabonba::Model {
public:
  shared_ptr<string> connectString{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxIOPS{};
  shared_ptr<string> nodeClass{};
  shared_ptr<string> nodeDescription{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> nodeStorage{};
  shared_ptr<long> port{};
  shared_ptr<string> status{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverListConfigserverAttribute() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverListConfigserverAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectString) {
      res["ConnectString"] = boost::any(*connectString);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxIOPS) {
      res["MaxIOPS"] = boost::any(*maxIOPS);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeDescription) {
      res["NodeDescription"] = boost::any(*nodeDescription);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeStorage) {
      res["NodeStorage"] = boost::any(*nodeStorage);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectString") != m.end() && !m["ConnectString"].empty()) {
      connectString = make_shared<string>(boost::any_cast<string>(m["ConnectString"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxIOPS") != m.end() && !m["MaxIOPS"].empty()) {
      maxIOPS = make_shared<long>(boost::any_cast<long>(m["MaxIOPS"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeDescription") != m.end() && !m["NodeDescription"].empty()) {
      nodeDescription = make_shared<string>(boost::any_cast<string>(m["NodeDescription"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeStorage") != m.end() && !m["NodeStorage"].empty()) {
      nodeStorage = make_shared<long>(boost::any_cast<long>(m["NodeStorage"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverListConfigserverAttribute() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverListConfigserverAttribute>> configserverAttribute{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverList() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configserverAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*configserverAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigserverAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigserverAttribute") != m.end() && !m["ConfigserverAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigserverAttribute"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverListConfigserverAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigserverAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverListConfigserverAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configserverAttribute = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverListConfigserverAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverList() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosListMongosAttribute : public Darabonba::Model {
public:
  shared_ptr<string> connectSting{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxIOPS{};
  shared_ptr<string> nodeClass{};
  shared_ptr<string> nodeDescription{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> port{};
  shared_ptr<string> status{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcCloudInstanceId{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosListMongosAttribute() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosListMongosAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectSting) {
      res["ConnectSting"] = boost::any(*connectSting);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxIOPS) {
      res["MaxIOPS"] = boost::any(*maxIOPS);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeDescription) {
      res["NodeDescription"] = boost::any(*nodeDescription);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcCloudInstanceId) {
      res["VpcCloudInstanceId"] = boost::any(*vpcCloudInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectSting") != m.end() && !m["ConnectSting"].empty()) {
      connectSting = make_shared<string>(boost::any_cast<string>(m["ConnectSting"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxIOPS") != m.end() && !m["MaxIOPS"].empty()) {
      maxIOPS = make_shared<long>(boost::any_cast<long>(m["MaxIOPS"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeDescription") != m.end() && !m["NodeDescription"].empty()) {
      nodeDescription = make_shared<string>(boost::any_cast<string>(m["NodeDescription"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcCloudInstanceId") != m.end() && !m["VpcCloudInstanceId"].empty()) {
      vpcCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcCloudInstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosListMongosAttribute() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosListMongosAttribute>> mongosAttribute{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosList() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mongosAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*mongosAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MongosAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MongosAttribute") != m.end() && !m["MongosAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["MongosAttribute"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosListMongosAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MongosAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosListMongosAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mongosAttribute = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosListMongosAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosList() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSetsReplicaSet : public Darabonba::Model {
public:
  shared_ptr<string> connectionDomain{};
  shared_ptr<string> connectionPort{};
  shared_ptr<string> networkType{};
  shared_ptr<string> replicaSetRole{};
  shared_ptr<string> VPCCloudInstanceId{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSetsReplicaSet() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSetsReplicaSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionDomain) {
      res["ConnectionDomain"] = boost::any(*connectionDomain);
    }
    if (connectionPort) {
      res["ConnectionPort"] = boost::any(*connectionPort);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (replicaSetRole) {
      res["ReplicaSetRole"] = boost::any(*replicaSetRole);
    }
    if (VPCCloudInstanceId) {
      res["VPCCloudInstanceId"] = boost::any(*VPCCloudInstanceId);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionDomain") != m.end() && !m["ConnectionDomain"].empty()) {
      connectionDomain = make_shared<string>(boost::any_cast<string>(m["ConnectionDomain"]));
    }
    if (m.find("ConnectionPort") != m.end() && !m["ConnectionPort"].empty()) {
      connectionPort = make_shared<string>(boost::any_cast<string>(m["ConnectionPort"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("ReplicaSetRole") != m.end() && !m["ReplicaSetRole"].empty()) {
      replicaSetRole = make_shared<string>(boost::any_cast<string>(m["ReplicaSetRole"]));
    }
    if (m.find("VPCCloudInstanceId") != m.end() && !m["VPCCloudInstanceId"].empty()) {
      VPCCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VPCCloudInstanceId"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSetsReplicaSet() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSets : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSetsReplicaSet>> replicaSet{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSets() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (replicaSet) {
      vector<boost::any> temp1;
      for(auto item1:*replicaSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReplicaSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReplicaSet") != m.end() && !m["ReplicaSet"].empty()) {
      if (typeid(vector<boost::any>) == m["ReplicaSet"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSetsReplicaSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReplicaSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSetsReplicaSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        replicaSet = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSetsReplicaSet>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSets() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardListShardAttribute : public Darabonba::Model {
public:
  shared_ptr<string> connectString{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxIOPS{};
  shared_ptr<string> nodeClass{};
  shared_ptr<string> nodeDescription{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> nodeStorage{};
  shared_ptr<long> port{};
  shared_ptr<long> readonlyReplicas{};
  shared_ptr<string> status{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardListShardAttribute() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardListShardAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectString) {
      res["ConnectString"] = boost::any(*connectString);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxIOPS) {
      res["MaxIOPS"] = boost::any(*maxIOPS);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeDescription) {
      res["NodeDescription"] = boost::any(*nodeDescription);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeStorage) {
      res["NodeStorage"] = boost::any(*nodeStorage);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (readonlyReplicas) {
      res["ReadonlyReplicas"] = boost::any(*readonlyReplicas);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectString") != m.end() && !m["ConnectString"].empty()) {
      connectString = make_shared<string>(boost::any_cast<string>(m["ConnectString"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxIOPS") != m.end() && !m["MaxIOPS"].empty()) {
      maxIOPS = make_shared<long>(boost::any_cast<long>(m["MaxIOPS"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeDescription") != m.end() && !m["NodeDescription"].empty()) {
      nodeDescription = make_shared<string>(boost::any_cast<string>(m["NodeDescription"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeStorage") != m.end() && !m["NodeStorage"].empty()) {
      nodeStorage = make_shared<long>(boost::any_cast<long>(m["NodeStorage"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ReadonlyReplicas") != m.end() && !m["ReadonlyReplicas"].empty()) {
      readonlyReplicas = make_shared<long>(boost::any_cast<long>(m["ReadonlyReplicas"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardListShardAttribute() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardListShardAttribute>> shardAttribute{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardList() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shardAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*shardAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShardAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShardAttribute") != m.end() && !m["ShardAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["ShardAttribute"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardListShardAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShardAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardListShardAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shardAttribute = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardListShardAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardList() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTagsTag() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTagsTag() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTagsTag>> tag{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTags() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTags() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstance : public Darabonba::Model {
public:
  shared_ptr<string> capacityUnit{};
  shared_ptr<string> chargeType{};
  shared_ptr<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverList> configserverList{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> currentKernelVersion{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<bool> DBInstanceReleaseProtection{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<long> DBInstanceStorage{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> hiddenZoneId{};
  shared_ptr<string> kindCode{};
  shared_ptr<string> lastDowngradeTime{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxIOPS{};
  shared_ptr<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosList> mongosList{};
  shared_ptr<string> networkType{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> readonlyReplicas{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replacateId{};
  shared_ptr<string> replicaSetName{};
  shared_ptr<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSets> replicaSets{};
  shared_ptr<string> replicationFactor{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> secondaryZoneId{};
  shared_ptr<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardList> shardList{};
  shared_ptr<string> storageEngine{};
  shared_ptr<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTags> tags{};
  shared_ptr<string> VPCCloudInstanceIds{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcAuthMode{};
  shared_ptr<string> zoneId{};

  DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstance() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacityUnit) {
      res["CapacityUnit"] = boost::any(*capacityUnit);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (configserverList) {
      res["ConfigserverList"] = configserverList ? boost::any(configserverList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (currentKernelVersion) {
      res["CurrentKernelVersion"] = boost::any(*currentKernelVersion);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceReleaseProtection) {
      res["DBInstanceReleaseProtection"] = boost::any(*DBInstanceReleaseProtection);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (DBInstanceStorage) {
      res["DBInstanceStorage"] = boost::any(*DBInstanceStorage);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (hiddenZoneId) {
      res["HiddenZoneId"] = boost::any(*hiddenZoneId);
    }
    if (kindCode) {
      res["KindCode"] = boost::any(*kindCode);
    }
    if (lastDowngradeTime) {
      res["LastDowngradeTime"] = boost::any(*lastDowngradeTime);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxIOPS) {
      res["MaxIOPS"] = boost::any(*maxIOPS);
    }
    if (mongosList) {
      res["MongosList"] = mongosList ? boost::any(mongosList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (readonlyReplicas) {
      res["ReadonlyReplicas"] = boost::any(*readonlyReplicas);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replacateId) {
      res["ReplacateId"] = boost::any(*replacateId);
    }
    if (replicaSetName) {
      res["ReplicaSetName"] = boost::any(*replicaSetName);
    }
    if (replicaSets) {
      res["ReplicaSets"] = replicaSets ? boost::any(replicaSets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (replicationFactor) {
      res["ReplicationFactor"] = boost::any(*replicationFactor);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (secondaryZoneId) {
      res["SecondaryZoneId"] = boost::any(*secondaryZoneId);
    }
    if (shardList) {
      res["ShardList"] = shardList ? boost::any(shardList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageEngine) {
      res["StorageEngine"] = boost::any(*storageEngine);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (VPCCloudInstanceIds) {
      res["VPCCloudInstanceIds"] = boost::any(*VPCCloudInstanceIds);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcAuthMode) {
      res["VpcAuthMode"] = boost::any(*vpcAuthMode);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CapacityUnit") != m.end() && !m["CapacityUnit"].empty()) {
      capacityUnit = make_shared<string>(boost::any_cast<string>(m["CapacityUnit"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ConfigserverList") != m.end() && !m["ConfigserverList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigserverList"].type()) {
        DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigserverList"]));
        configserverList = make_shared<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceConfigserverList>(model1);
      }
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("CurrentKernelVersion") != m.end() && !m["CurrentKernelVersion"].empty()) {
      currentKernelVersion = make_shared<string>(boost::any_cast<string>(m["CurrentKernelVersion"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceReleaseProtection") != m.end() && !m["DBInstanceReleaseProtection"].empty()) {
      DBInstanceReleaseProtection = make_shared<bool>(boost::any_cast<bool>(m["DBInstanceReleaseProtection"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("DBInstanceStorage") != m.end() && !m["DBInstanceStorage"].empty()) {
      DBInstanceStorage = make_shared<long>(boost::any_cast<long>(m["DBInstanceStorage"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HiddenZoneId") != m.end() && !m["HiddenZoneId"].empty()) {
      hiddenZoneId = make_shared<string>(boost::any_cast<string>(m["HiddenZoneId"]));
    }
    if (m.find("KindCode") != m.end() && !m["KindCode"].empty()) {
      kindCode = make_shared<string>(boost::any_cast<string>(m["KindCode"]));
    }
    if (m.find("LastDowngradeTime") != m.end() && !m["LastDowngradeTime"].empty()) {
      lastDowngradeTime = make_shared<string>(boost::any_cast<string>(m["LastDowngradeTime"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxIOPS") != m.end() && !m["MaxIOPS"].empty()) {
      maxIOPS = make_shared<long>(boost::any_cast<long>(m["MaxIOPS"]));
    }
    if (m.find("MongosList") != m.end() && !m["MongosList"].empty()) {
      if (typeid(map<string, boost::any>) == m["MongosList"].type()) {
        DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MongosList"]));
        mongosList = make_shared<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceMongosList>(model1);
      }
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("ReadonlyReplicas") != m.end() && !m["ReadonlyReplicas"].empty()) {
      readonlyReplicas = make_shared<string>(boost::any_cast<string>(m["ReadonlyReplicas"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplacateId") != m.end() && !m["ReplacateId"].empty()) {
      replacateId = make_shared<string>(boost::any_cast<string>(m["ReplacateId"]));
    }
    if (m.find("ReplicaSetName") != m.end() && !m["ReplicaSetName"].empty()) {
      replicaSetName = make_shared<string>(boost::any_cast<string>(m["ReplicaSetName"]));
    }
    if (m.find("ReplicaSets") != m.end() && !m["ReplicaSets"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReplicaSets"].type()) {
        DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReplicaSets"]));
        replicaSets = make_shared<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceReplicaSets>(model1);
      }
    }
    if (m.find("ReplicationFactor") != m.end() && !m["ReplicationFactor"].empty()) {
      replicationFactor = make_shared<string>(boost::any_cast<string>(m["ReplicationFactor"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecondaryZoneId") != m.end() && !m["SecondaryZoneId"].empty()) {
      secondaryZoneId = make_shared<string>(boost::any_cast<string>(m["SecondaryZoneId"]));
    }
    if (m.find("ShardList") != m.end() && !m["ShardList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ShardList"].type()) {
        DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ShardList"]));
        shardList = make_shared<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceShardList>(model1);
      }
    }
    if (m.find("StorageEngine") != m.end() && !m["StorageEngine"].empty()) {
      storageEngine = make_shared<string>(boost::any_cast<string>(m["StorageEngine"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstanceTags>(model1);
      }
    }
    if (m.find("VPCCloudInstanceIds") != m.end() && !m["VPCCloudInstanceIds"].empty()) {
      VPCCloudInstanceIds = make_shared<string>(boost::any_cast<string>(m["VPCCloudInstanceIds"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcAuthMode") != m.end() && !m["VpcAuthMode"].empty()) {
      vpcAuthMode = make_shared<string>(boost::any_cast<string>(m["VpcAuthMode"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstance() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstance>> DBInstance{};

  DescribeDBInstanceAttributeResponseBodyDBInstances() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstance) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstance"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstance = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBInstancesDBInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBInstances() = default;
};
class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstanceAttributeResponseBodyDBInstances> DBInstances{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceAttributeResponseBody() {}

  explicit DescribeDBInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstances) {
      res["DBInstances"] = DBInstances ? boost::any(DBInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstances") != m.end() && !m["DBInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstances"].type()) {
        DescribeDBInstanceAttributeResponseBodyDBInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstances"]));
        DBInstances = make_shared<DescribeDBInstanceAttributeResponseBodyDBInstances>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBody() = default;
};
class DescribeDBInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceAttributeResponseBody> body{};

  DescribeDBInstanceAttributeResponse() {}

  explicit DescribeDBInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponse() = default;
};
class DescribeDBInstanceEncryptionKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeDBInstanceEncryptionKeyRequest() {}

  explicit DescribeDBInstanceEncryptionKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeDBInstanceEncryptionKeyRequest() = default;
};
class DescribeDBInstanceEncryptionKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<string> deleteDate{};
  shared_ptr<string> description{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> encryptionKeyStatus{};
  shared_ptr<string> keyUsage{};
  shared_ptr<string> materialExpireTime{};
  shared_ptr<string> origin{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceEncryptionKeyResponseBody() {}

  explicit DescribeDBInstanceEncryptionKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (deleteDate) {
      res["DeleteDate"] = boost::any(*deleteDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (encryptionKeyStatus) {
      res["EncryptionKeyStatus"] = boost::any(*encryptionKeyStatus);
    }
    if (keyUsage) {
      res["KeyUsage"] = boost::any(*keyUsage);
    }
    if (materialExpireTime) {
      res["MaterialExpireTime"] = boost::any(*materialExpireTime);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("DeleteDate") != m.end() && !m["DeleteDate"].empty()) {
      deleteDate = make_shared<string>(boost::any_cast<string>(m["DeleteDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("EncryptionKeyStatus") != m.end() && !m["EncryptionKeyStatus"].empty()) {
      encryptionKeyStatus = make_shared<string>(boost::any_cast<string>(m["EncryptionKeyStatus"]));
    }
    if (m.find("KeyUsage") != m.end() && !m["KeyUsage"].empty()) {
      keyUsage = make_shared<string>(boost::any_cast<string>(m["KeyUsage"]));
    }
    if (m.find("MaterialExpireTime") != m.end() && !m["MaterialExpireTime"].empty()) {
      materialExpireTime = make_shared<string>(boost::any_cast<string>(m["MaterialExpireTime"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceEncryptionKeyResponseBody() = default;
};
class DescribeDBInstanceEncryptionKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceEncryptionKeyResponseBody> body{};

  DescribeDBInstanceEncryptionKeyResponse() {}

  explicit DescribeDBInstanceEncryptionKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceEncryptionKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceEncryptionKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceEncryptionKeyResponse() = default;
};
class DescribeDBInstanceMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeDBInstanceMonitorRequest() {}

  explicit DescribeDBInstanceMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeDBInstanceMonitorRequest() = default;
};
class DescribeDBInstanceMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> granularity{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceMonitorResponseBody() {}

  explicit DescribeDBInstanceMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceMonitorResponseBody() = default;
};
class DescribeDBInstanceMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceMonitorResponseBody> body{};

  DescribeDBInstanceMonitorResponse() {}

  explicit DescribeDBInstanceMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceMonitorResponse() = default;
};
class DescribeDBInstancePerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> key{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> replicaSetRole{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> roleId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> startTime{};

  DescribeDBInstancePerformanceRequest() {}

  explicit DescribeDBInstancePerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (replicaSetRole) {
      res["ReplicaSetRole"] = boost::any(*replicaSetRole);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReplicaSetRole") != m.end() && !m["ReplicaSetRole"].empty()) {
      replicaSetRole = make_shared<string>(boost::any_cast<string>(m["ReplicaSetRole"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBInstancePerformanceRequest() = default;
};
class DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> value{};

  DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue() {}

  explicit DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue() = default;
};
class DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue>> performanceValue{};

  DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues() {}

  explicit DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceValue) {
      vector<boost::any> temp1;
      for(auto item1:*performanceValue){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceValue"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceValue") != m.end() && !m["PerformanceValue"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceValue"].type()) {
        vector<DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceValue"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceValue = make_shared<vector<DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValuesPerformanceValue>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues() = default;
};
class DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues> performanceValues{};
  shared_ptr<string> unit{};
  shared_ptr<string> valueFormat{};

  DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey() {}

  explicit DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (performanceValues) {
      res["PerformanceValues"] = performanceValues ? boost::any(performanceValues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (valueFormat) {
      res["ValueFormat"] = boost::any(*valueFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("PerformanceValues") != m.end() && !m["PerformanceValues"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerformanceValues"].type()) {
        DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerformanceValues"]));
        performanceValues = make_shared<DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKeyPerformanceValues>(model1);
      }
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("ValueFormat") != m.end() && !m["ValueFormat"].empty()) {
      valueFormat = make_shared<string>(boost::any_cast<string>(m["ValueFormat"]));
    }
  }


  virtual ~DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey() = default;
};
class DescribeDBInstancePerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey>> performanceKey{};

  DescribeDBInstancePerformanceResponseBodyPerformanceKeys() {}

  explicit DescribeDBInstancePerformanceResponseBodyPerformanceKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceKey) {
      vector<boost::any> temp1;
      for(auto item1:*performanceKey){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceKey"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceKey") != m.end() && !m["PerformanceKey"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceKey"].type()) {
        vector<DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceKey"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceKey = make_shared<vector<DescribeDBInstancePerformanceResponseBodyPerformanceKeysPerformanceKey>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancePerformanceResponseBodyPerformanceKeys() = default;
};
class DescribeDBInstancePerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<DescribeDBInstancePerformanceResponseBodyPerformanceKeys> performanceKeys{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};

  DescribeDBInstancePerformanceResponseBody() {}

  explicit DescribeDBInstancePerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (performanceKeys) {
      res["PerformanceKeys"] = performanceKeys ? boost::any(performanceKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerformanceKeys"].type()) {
        DescribeDBInstancePerformanceResponseBodyPerformanceKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerformanceKeys"]));
        performanceKeys = make_shared<DescribeDBInstancePerformanceResponseBodyPerformanceKeys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBInstancePerformanceResponseBody() = default;
};
class DescribeDBInstancePerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstancePerformanceResponseBody> body{};

  DescribeDBInstancePerformanceResponse() {}

  explicit DescribeDBInstancePerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstancePerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancePerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancePerformanceResponse() = default;
};
class DescribeDBInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeDBInstanceSSLRequest() {}

  explicit DescribeDBInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeDBInstanceSSLRequest() = default;
};
class DescribeDBInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certCommonName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> SSLExpiredTime{};
  shared_ptr<string> SSLStatus{};

  DescribeDBInstanceSSLResponseBody() {}

  explicit DescribeDBInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certCommonName) {
      res["CertCommonName"] = boost::any(*certCommonName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SSLExpiredTime) {
      res["SSLExpiredTime"] = boost::any(*SSLExpiredTime);
    }
    if (SSLStatus) {
      res["SSLStatus"] = boost::any(*SSLStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertCommonName") != m.end() && !m["CertCommonName"].empty()) {
      certCommonName = make_shared<string>(boost::any_cast<string>(m["CertCommonName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SSLExpiredTime") != m.end() && !m["SSLExpiredTime"].empty()) {
      SSLExpiredTime = make_shared<string>(boost::any_cast<string>(m["SSLExpiredTime"]));
    }
    if (m.find("SSLStatus") != m.end() && !m["SSLStatus"].empty()) {
      SSLStatus = make_shared<string>(boost::any_cast<string>(m["SSLStatus"]));
    }
  }


  virtual ~DescribeDBInstanceSSLResponseBody() = default;
};
class DescribeDBInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceSSLResponseBody> body{};

  DescribeDBInstanceSSLResponse() {}

  explicit DescribeDBInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceSSLResponse() = default;
};
class DescribeDBInstanceTDEInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeDBInstanceTDEInfoRequest() {}

  explicit DescribeDBInstanceTDEInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeDBInstanceTDEInfoRequest() = default;
};
class DescribeDBInstanceTDEInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> TDEStatus{};

  DescribeDBInstanceTDEInfoResponseBody() {}

  explicit DescribeDBInstanceTDEInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (TDEStatus) {
      res["TDEStatus"] = boost::any(*TDEStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TDEStatus") != m.end() && !m["TDEStatus"].empty()) {
      TDEStatus = make_shared<string>(boost::any_cast<string>(m["TDEStatus"]));
    }
  }


  virtual ~DescribeDBInstanceTDEInfoResponseBody() = default;
};
class DescribeDBInstanceTDEInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceTDEInfoResponseBody> body{};

  DescribeDBInstanceTDEInfoResponse() {}

  explicit DescribeDBInstanceTDEInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceTDEInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceTDEInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceTDEInfoResponse() = default;
};
class DescribeDBInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstancesRequestTag() {}

  explicit DescribeDBInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBInstancesRequestTag() = default;
};
class DescribeDBInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> connectionDomain{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> expired{};
  shared_ptr<string> networkType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicationFactor{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<vector<DescribeDBInstancesRequestTag>> tag{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstancesRequest() {}

  explicit DescribeDBInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (connectionDomain) {
      res["ConnectionDomain"] = boost::any(*connectionDomain);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicationFactor) {
      res["ReplicationFactor"] = boost::any(*replicationFactor);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ConnectionDomain") != m.end() && !m["ConnectionDomain"].empty()) {
      connectionDomain = make_shared<string>(boost::any_cast<string>(m["ConnectionDomain"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicationFactor") != m.end() && !m["ReplicationFactor"].empty()) {
      replicationFactor = make_shared<string>(boost::any_cast<string>(m["ReplicationFactor"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstancesRequestTag>>(expect1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstancesRequest() = default;
};
class DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosListMongosAttribute : public Darabonba::Model {
public:
  shared_ptr<string> nodeClass{};
  shared_ptr<string> nodeDescription{};
  shared_ptr<string> nodeId{};

  DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosListMongosAttribute() {}

  explicit DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosListMongosAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeDescription) {
      res["NodeDescription"] = boost::any(*nodeDescription);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeDescription") != m.end() && !m["NodeDescription"].empty()) {
      nodeDescription = make_shared<string>(boost::any_cast<string>(m["NodeDescription"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosListMongosAttribute() = default;
};
class DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosListMongosAttribute>> mongosAttribute{};

  DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosList() {}

  explicit DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mongosAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*mongosAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MongosAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MongosAttribute") != m.end() && !m["MongosAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["MongosAttribute"].type()) {
        vector<DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosListMongosAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MongosAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosListMongosAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mongosAttribute = make_shared<vector<DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosListMongosAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosList() = default;
};
class DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardListShardAttribute : public Darabonba::Model {
public:
  shared_ptr<string> nodeClass{};
  shared_ptr<string> nodeDescription{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> nodeStorage{};
  shared_ptr<long> readonlyReplicas{};

  DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardListShardAttribute() {}

  explicit DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardListShardAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeDescription) {
      res["NodeDescription"] = boost::any(*nodeDescription);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeStorage) {
      res["NodeStorage"] = boost::any(*nodeStorage);
    }
    if (readonlyReplicas) {
      res["ReadonlyReplicas"] = boost::any(*readonlyReplicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeDescription") != m.end() && !m["NodeDescription"].empty()) {
      nodeDescription = make_shared<string>(boost::any_cast<string>(m["NodeDescription"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeStorage") != m.end() && !m["NodeStorage"].empty()) {
      nodeStorage = make_shared<long>(boost::any_cast<long>(m["NodeStorage"]));
    }
    if (m.find("ReadonlyReplicas") != m.end() && !m["ReadonlyReplicas"].empty()) {
      readonlyReplicas = make_shared<long>(boost::any_cast<long>(m["ReadonlyReplicas"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardListShardAttribute() = default;
};
class DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardListShardAttribute>> shardAttribute{};

  DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardList() {}

  explicit DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shardAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*shardAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShardAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShardAttribute") != m.end() && !m["ShardAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["ShardAttribute"].type()) {
        vector<DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardListShardAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShardAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardListShardAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shardAttribute = make_shared<vector<DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardListShardAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardList() = default;
};
class DescribeDBInstancesResponseBodyDBInstancesDBInstanceTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstancesResponseBodyDBInstancesDBInstanceTagsTag() {}

  explicit DescribeDBInstancesResponseBodyDBInstancesDBInstanceTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstancesDBInstanceTagsTag() = default;
};
class DescribeDBInstancesResponseBodyDBInstancesDBInstanceTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyDBInstancesDBInstanceTagsTag>> tag{};

  DescribeDBInstancesResponseBodyDBInstancesDBInstanceTags() {}

  explicit DescribeDBInstancesResponseBodyDBInstancesDBInstanceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBInstancesResponseBodyDBInstancesDBInstanceTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyDBInstancesDBInstanceTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstancesResponseBodyDBInstancesDBInstanceTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstancesDBInstanceTags() = default;
};
class DescribeDBInstancesResponseBodyDBInstancesDBInstance : public Darabonba::Model {
public:
  shared_ptr<string> capacityUnit{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<long> DBInstanceStorage{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> destroyTime{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> hiddenZoneId{};
  shared_ptr<string> kindCode{};
  shared_ptr<string> lastDowngradeTime{};
  shared_ptr<string> lockMode{};
  shared_ptr<DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosList> mongosList{};
  shared_ptr<string> networkType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicationFactor{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> secondaryZoneId{};
  shared_ptr<DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardList> shardList{};
  shared_ptr<string> storageType{};
  shared_ptr<DescribeDBInstancesResponseBodyDBInstancesDBInstanceTags> tags{};
  shared_ptr<string> vpcAuthMode{};
  shared_ptr<string> zoneId{};

  DescribeDBInstancesResponseBodyDBInstancesDBInstance() {}

  explicit DescribeDBInstancesResponseBodyDBInstancesDBInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacityUnit) {
      res["CapacityUnit"] = boost::any(*capacityUnit);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (DBInstanceStorage) {
      res["DBInstanceStorage"] = boost::any(*DBInstanceStorage);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (destroyTime) {
      res["DestroyTime"] = boost::any(*destroyTime);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (hiddenZoneId) {
      res["HiddenZoneId"] = boost::any(*hiddenZoneId);
    }
    if (kindCode) {
      res["KindCode"] = boost::any(*kindCode);
    }
    if (lastDowngradeTime) {
      res["LastDowngradeTime"] = boost::any(*lastDowngradeTime);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (mongosList) {
      res["MongosList"] = mongosList ? boost::any(mongosList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicationFactor) {
      res["ReplicationFactor"] = boost::any(*replicationFactor);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (secondaryZoneId) {
      res["SecondaryZoneId"] = boost::any(*secondaryZoneId);
    }
    if (shardList) {
      res["ShardList"] = shardList ? boost::any(shardList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcAuthMode) {
      res["VpcAuthMode"] = boost::any(*vpcAuthMode);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CapacityUnit") != m.end() && !m["CapacityUnit"].empty()) {
      capacityUnit = make_shared<string>(boost::any_cast<string>(m["CapacityUnit"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("DBInstanceStorage") != m.end() && !m["DBInstanceStorage"].empty()) {
      DBInstanceStorage = make_shared<long>(boost::any_cast<long>(m["DBInstanceStorage"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("DestroyTime") != m.end() && !m["DestroyTime"].empty()) {
      destroyTime = make_shared<string>(boost::any_cast<string>(m["DestroyTime"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("HiddenZoneId") != m.end() && !m["HiddenZoneId"].empty()) {
      hiddenZoneId = make_shared<string>(boost::any_cast<string>(m["HiddenZoneId"]));
    }
    if (m.find("KindCode") != m.end() && !m["KindCode"].empty()) {
      kindCode = make_shared<string>(boost::any_cast<string>(m["KindCode"]));
    }
    if (m.find("LastDowngradeTime") != m.end() && !m["LastDowngradeTime"].empty()) {
      lastDowngradeTime = make_shared<string>(boost::any_cast<string>(m["LastDowngradeTime"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MongosList") != m.end() && !m["MongosList"].empty()) {
      if (typeid(map<string, boost::any>) == m["MongosList"].type()) {
        DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MongosList"]));
        mongosList = make_shared<DescribeDBInstancesResponseBodyDBInstancesDBInstanceMongosList>(model1);
      }
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicationFactor") != m.end() && !m["ReplicationFactor"].empty()) {
      replicationFactor = make_shared<string>(boost::any_cast<string>(m["ReplicationFactor"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecondaryZoneId") != m.end() && !m["SecondaryZoneId"].empty()) {
      secondaryZoneId = make_shared<string>(boost::any_cast<string>(m["SecondaryZoneId"]));
    }
    if (m.find("ShardList") != m.end() && !m["ShardList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ShardList"].type()) {
        DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ShardList"]));
        shardList = make_shared<DescribeDBInstancesResponseBodyDBInstancesDBInstanceShardList>(model1);
      }
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBInstancesResponseBodyDBInstancesDBInstanceTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBInstancesResponseBodyDBInstancesDBInstanceTags>(model1);
      }
    }
    if (m.find("VpcAuthMode") != m.end() && !m["VpcAuthMode"].empty()) {
      vpcAuthMode = make_shared<string>(boost::any_cast<string>(m["VpcAuthMode"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstancesDBInstance() = default;
};
class DescribeDBInstancesResponseBodyDBInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyDBInstancesDBInstance>> DBInstance{};

  DescribeDBInstancesResponseBodyDBInstances() {}

  explicit DescribeDBInstancesResponseBodyDBInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstance) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstance"].type()) {
        vector<DescribeDBInstancesResponseBodyDBInstancesDBInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyDBInstancesDBInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstance = make_shared<vector<DescribeDBInstancesResponseBodyDBInstancesDBInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponseBodyDBInstances() = default;
};
class DescribeDBInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDBInstancesResponseBodyDBInstances> DBInstances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDBInstancesResponseBody() {}

  explicit DescribeDBInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstances) {
      res["DBInstances"] = DBInstances ? boost::any(DBInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstances") != m.end() && !m["DBInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstances"].type()) {
        DescribeDBInstancesResponseBodyDBInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstances"]));
        DBInstances = make_shared<DescribeDBInstancesResponseBodyDBInstances>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBody() = default;
};
class DescribeDBInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstancesResponseBody> body{};

  DescribeDBInstancesResponse() {}

  explicit DescribeDBInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponse() = default;
};
class DescribeDBInstancesOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> instanceIds{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> networkType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstancesOverviewRequest() {}

  explicit DescribeDBInstancesOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstancesOverviewRequest() = default;
};
class DescribeDBInstancesOverviewResponseBodyDBInstancesMongosList : public Darabonba::Model {
public:
  shared_ptr<string> nodeClass{};
  shared_ptr<string> nodeDescription{};
  shared_ptr<string> nodeId{};

  DescribeDBInstancesOverviewResponseBodyDBInstancesMongosList() {}

  explicit DescribeDBInstancesOverviewResponseBodyDBInstancesMongosList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeDescription) {
      res["NodeDescription"] = boost::any(*nodeDescription);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeDescription") != m.end() && !m["NodeDescription"].empty()) {
      nodeDescription = make_shared<string>(boost::any_cast<string>(m["NodeDescription"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~DescribeDBInstancesOverviewResponseBodyDBInstancesMongosList() = default;
};
class DescribeDBInstancesOverviewResponseBodyDBInstancesShardList : public Darabonba::Model {
public:
  shared_ptr<string> nodeClass{};
  shared_ptr<string> nodeDescription{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> nodeStorage{};
  shared_ptr<long> readonlyReplicas{};

  DescribeDBInstancesOverviewResponseBodyDBInstancesShardList() {}

  explicit DescribeDBInstancesOverviewResponseBodyDBInstancesShardList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeDescription) {
      res["NodeDescription"] = boost::any(*nodeDescription);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeStorage) {
      res["NodeStorage"] = boost::any(*nodeStorage);
    }
    if (readonlyReplicas) {
      res["ReadonlyReplicas"] = boost::any(*readonlyReplicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeDescription") != m.end() && !m["NodeDescription"].empty()) {
      nodeDescription = make_shared<string>(boost::any_cast<string>(m["NodeDescription"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeStorage") != m.end() && !m["NodeStorage"].empty()) {
      nodeStorage = make_shared<long>(boost::any_cast<long>(m["NodeStorage"]));
    }
    if (m.find("ReadonlyReplicas") != m.end() && !m["ReadonlyReplicas"].empty()) {
      readonlyReplicas = make_shared<long>(boost::any_cast<long>(m["ReadonlyReplicas"]));
    }
  }


  virtual ~DescribeDBInstancesOverviewResponseBodyDBInstancesShardList() = default;
};
class DescribeDBInstancesOverviewResponseBodyDBInstancesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstancesOverviewResponseBodyDBInstancesTags() {}

  explicit DescribeDBInstancesOverviewResponseBodyDBInstancesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBInstancesOverviewResponseBodyDBInstancesTags() = default;
};
class DescribeDBInstancesOverviewResponseBodyDBInstances : public Darabonba::Model {
public:
  shared_ptr<string> capacityUnit{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<long> DBInstanceStorage{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> destroyTime{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> kindCode{};
  shared_ptr<string> lastDowngradeTime{};
  shared_ptr<string> lockMode{};
  shared_ptr<vector<DescribeDBInstancesOverviewResponseBodyDBInstancesMongosList>> mongosList{};
  shared_ptr<string> networkType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicationFactor{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeDBInstancesOverviewResponseBodyDBInstancesShardList>> shardList{};
  shared_ptr<vector<DescribeDBInstancesOverviewResponseBodyDBInstancesTags>> tags{};
  shared_ptr<string> vpcAuthMode{};
  shared_ptr<string> zoneId{};

  DescribeDBInstancesOverviewResponseBodyDBInstances() {}

  explicit DescribeDBInstancesOverviewResponseBodyDBInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacityUnit) {
      res["CapacityUnit"] = boost::any(*capacityUnit);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (DBInstanceStorage) {
      res["DBInstanceStorage"] = boost::any(*DBInstanceStorage);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (destroyTime) {
      res["DestroyTime"] = boost::any(*destroyTime);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (kindCode) {
      res["KindCode"] = boost::any(*kindCode);
    }
    if (lastDowngradeTime) {
      res["LastDowngradeTime"] = boost::any(*lastDowngradeTime);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (mongosList) {
      vector<boost::any> temp1;
      for(auto item1:*mongosList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MongosList"] = boost::any(temp1);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicationFactor) {
      res["ReplicationFactor"] = boost::any(*replicationFactor);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (shardList) {
      vector<boost::any> temp1;
      for(auto item1:*shardList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShardList"] = boost::any(temp1);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (vpcAuthMode) {
      res["VpcAuthMode"] = boost::any(*vpcAuthMode);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CapacityUnit") != m.end() && !m["CapacityUnit"].empty()) {
      capacityUnit = make_shared<string>(boost::any_cast<string>(m["CapacityUnit"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("DBInstanceStorage") != m.end() && !m["DBInstanceStorage"].empty()) {
      DBInstanceStorage = make_shared<long>(boost::any_cast<long>(m["DBInstanceStorage"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("DestroyTime") != m.end() && !m["DestroyTime"].empty()) {
      destroyTime = make_shared<string>(boost::any_cast<string>(m["DestroyTime"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("KindCode") != m.end() && !m["KindCode"].empty()) {
      kindCode = make_shared<string>(boost::any_cast<string>(m["KindCode"]));
    }
    if (m.find("LastDowngradeTime") != m.end() && !m["LastDowngradeTime"].empty()) {
      lastDowngradeTime = make_shared<string>(boost::any_cast<string>(m["LastDowngradeTime"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("MongosList") != m.end() && !m["MongosList"].empty()) {
      if (typeid(vector<boost::any>) == m["MongosList"].type()) {
        vector<DescribeDBInstancesOverviewResponseBodyDBInstancesMongosList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MongosList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesOverviewResponseBodyDBInstancesMongosList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mongosList = make_shared<vector<DescribeDBInstancesOverviewResponseBodyDBInstancesMongosList>>(expect1);
      }
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicationFactor") != m.end() && !m["ReplicationFactor"].empty()) {
      replicationFactor = make_shared<string>(boost::any_cast<string>(m["ReplicationFactor"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShardList") != m.end() && !m["ShardList"].empty()) {
      if (typeid(vector<boost::any>) == m["ShardList"].type()) {
        vector<DescribeDBInstancesOverviewResponseBodyDBInstancesShardList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShardList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesOverviewResponseBodyDBInstancesShardList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shardList = make_shared<vector<DescribeDBInstancesOverviewResponseBodyDBInstancesShardList>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDBInstancesOverviewResponseBodyDBInstancesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesOverviewResponseBodyDBInstancesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDBInstancesOverviewResponseBodyDBInstancesTags>>(expect1);
      }
    }
    if (m.find("VpcAuthMode") != m.end() && !m["VpcAuthMode"].empty()) {
      vpcAuthMode = make_shared<string>(boost::any_cast<string>(m["VpcAuthMode"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstancesOverviewResponseBodyDBInstances() = default;
};
class DescribeDBInstancesOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesOverviewResponseBodyDBInstances>> DBInstances{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  DescribeDBInstancesOverviewResponseBody() {}

  explicit DescribeDBInstancesOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstances) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstances"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstances") != m.end() && !m["DBInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstances"].type()) {
        vector<DescribeDBInstancesOverviewResponseBodyDBInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesOverviewResponseBodyDBInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstances = make_shared<vector<DescribeDBInstancesOverviewResponseBodyDBInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDBInstancesOverviewResponseBody() = default;
};
class DescribeDBInstancesOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstancesOverviewResponseBody> body{};

  DescribeDBInstancesOverviewResponse() {}

  explicit DescribeDBInstancesOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstancesOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancesOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancesOverviewResponse() = default;
};
class DescribeDedicatedClusterInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> dedicatedHostName{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceNetType{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> zoneId{};

  DescribeDedicatedClusterInstanceListRequest() {}

  explicit DescribeDedicatedClusterInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dedicatedHostName) {
      res["DedicatedHostName"] = boost::any(*dedicatedHostName);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceNetType) {
      res["InstanceNetType"] = boost::any(*instanceNetType);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DedicatedHostName") != m.end() && !m["DedicatedHostName"].empty()) {
      dedicatedHostName = make_shared<string>(boost::any_cast<string>(m["DedicatedHostName"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceNetType") != m.end() && !m["InstanceNetType"].empty()) {
      instanceNetType = make_shared<string>(boost::any_cast<string>(m["InstanceNetType"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListRequest() = default;
};
class DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeListInstanceNodes : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostName{};
  shared_ptr<string> insName{};
  shared_ptr<long> nodeId{};
  shared_ptr<string> nodeIp{};
  shared_ptr<string> nodeType{};
  shared_ptr<long> port{};
  shared_ptr<string> role{};
  shared_ptr<string> zoneId{};

  DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeListInstanceNodes() {}

  explicit DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeListInstanceNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostName) {
      res["DedicatedHostName"] = boost::any(*dedicatedHostName);
    }
    if (insName) {
      res["InsName"] = boost::any(*insName);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeIp) {
      res["NodeIp"] = boost::any(*nodeIp);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostName") != m.end() && !m["DedicatedHostName"].empty()) {
      dedicatedHostName = make_shared<string>(boost::any_cast<string>(m["DedicatedHostName"]));
    }
    if (m.find("InsName") != m.end() && !m["InsName"].empty()) {
      insName = make_shared<string>(boost::any_cast<string>(m["InsName"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
    if (m.find("NodeIp") != m.end() && !m["NodeIp"].empty()) {
      nodeIp = make_shared<string>(boost::any_cast<string>(m["NodeIp"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeListInstanceNodes() = default;
};
class DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeListInstanceNodes>> instanceNodes{};

  DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeList() {}

  explicit DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceNodes) {
      vector<boost::any> temp1;
      for(auto item1:*instanceNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceNodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceNodes") != m.end() && !m["InstanceNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceNodes"].type()) {
        vector<DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeListInstanceNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeListInstanceNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceNodes = make_shared<vector<DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeListInstanceNodes>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeList() = default;
};
class DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstance : public Darabonba::Model {
public:
  shared_ptr<string> characterType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> customId{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeList> instanceNodeList{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> region{};
  shared_ptr<string> regionId{};
  shared_ptr<string> storageType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstance() {}

  explicit DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceNodeList) {
      res["InstanceNodeList"] = instanceNodeList ? boost::any(instanceNodeList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceNodeList") != m.end() && !m["InstanceNodeList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceNodeList"].type()) {
        DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceNodeList"]));
        instanceNodeList = make_shared<DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstanceInstanceNodeList>(model1);
      }
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstance() = default;
};
class DescribeDedicatedClusterInstanceListResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstance>> dbInstance{};

  DescribeDedicatedClusterInstanceListResponseBodyInstances() {}

  explicit DescribeDedicatedClusterInstanceListResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbInstance) {
      vector<boost::any> temp1;
      for(auto item1:*dbInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dbInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dbInstance") != m.end() && !m["dbInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["dbInstance"].type()) {
        vector<DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dbInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbInstance = make_shared<vector<DescribeDedicatedClusterInstanceListResponseBodyInstancesDbInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListResponseBodyInstances() = default;
};
class DescribeDedicatedClusterInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDedicatedClusterInstanceListResponseBodyInstances> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDedicatedClusterInstanceListResponseBody() {}

  explicit DescribeDedicatedClusterInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        DescribeDedicatedClusterInstanceListResponseBodyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<DescribeDedicatedClusterInstanceListResponseBodyInstances>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListResponseBody() = default;
};
class DescribeDedicatedClusterInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDedicatedClusterInstanceListResponseBody> body{};

  DescribeDedicatedClusterInstanceListResponse() {}

  explicit DescribeDedicatedClusterInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedClusterInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedClusterInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedClusterInstanceListResponse() = default;
};
class DescribeErrorLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> roleType{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> startTime{};

  DescribeErrorLogRecordsRequest() {}

  explicit DescribeErrorLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeErrorLogRecordsRequest() = default;
};
class DescribeErrorLogRecordsResponseBodyItemsLogRecords : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> connInfo{};
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<long> id{};

  DescribeErrorLogRecordsResponseBodyItemsLogRecords() {}

  explicit DescribeErrorLogRecordsResponseBodyItemsLogRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (connInfo) {
      res["ConnInfo"] = boost::any(*connInfo);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ConnInfo") != m.end() && !m["ConnInfo"].empty()) {
      connInfo = make_shared<string>(boost::any_cast<string>(m["ConnInfo"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DescribeErrorLogRecordsResponseBodyItemsLogRecords() = default;
};
class DescribeErrorLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeErrorLogRecordsResponseBodyItemsLogRecords>> logRecords{};

  DescribeErrorLogRecordsResponseBodyItems() {}

  explicit DescribeErrorLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logRecords) {
      vector<boost::any> temp1;
      for(auto item1:*logRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogRecords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogRecords") != m.end() && !m["LogRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["LogRecords"].type()) {
        vector<DescribeErrorLogRecordsResponseBodyItemsLogRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeErrorLogRecordsResponseBodyItemsLogRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logRecords = make_shared<vector<DescribeErrorLogRecordsResponseBodyItemsLogRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeErrorLogRecordsResponseBodyItems() = default;
};
class DescribeErrorLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<DescribeErrorLogRecordsResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeErrorLogRecordsResponseBody() {}

  explicit DescribeErrorLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeErrorLogRecordsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeErrorLogRecordsResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeErrorLogRecordsResponseBody() = default;
};
class DescribeErrorLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeErrorLogRecordsResponseBody> body{};

  DescribeErrorLogRecordsResponse() {}

  explicit DescribeErrorLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeErrorLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeErrorLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeErrorLogRecordsResponse() = default;
};
class DescribeInstanceAutoRenewalAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeInstanceAutoRenewalAttributeRequest() {}

  explicit DescribeInstanceAutoRenewalAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeInstanceAutoRenewalAttributeRequest() = default;
};
class DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> DBInstanceType{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> duration{};
  shared_ptr<string> regionId{};

  DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem() {}

  explicit DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (DBInstanceType) {
      res["DBInstanceType"] = boost::any(*DBInstanceType);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("DBInstanceType") != m.end() && !m["DBInstanceType"].empty()) {
      DBInstanceType = make_shared<string>(boost::any_cast<string>(m["DBInstanceType"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem() = default;
};
class DescribeInstanceAutoRenewalAttributeResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem>> item{};

  DescribeInstanceAutoRenewalAttributeResponseBodyItems() {}

  explicit DescribeInstanceAutoRenewalAttributeResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<DescribeInstanceAutoRenewalAttributeResponseBodyItemsItem>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceAutoRenewalAttributeResponseBodyItems() = default;
};
class DescribeInstanceAutoRenewalAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeInstanceAutoRenewalAttributeResponseBodyItems> items{};
  shared_ptr<long> itemsNumbers{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};

  DescribeInstanceAutoRenewalAttributeResponseBody() {}

  explicit DescribeInstanceAutoRenewalAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (itemsNumbers) {
      res["ItemsNumbers"] = boost::any(*itemsNumbers);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeInstanceAutoRenewalAttributeResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeInstanceAutoRenewalAttributeResponseBodyItems>(model1);
      }
    }
    if (m.find("ItemsNumbers") != m.end() && !m["ItemsNumbers"].empty()) {
      itemsNumbers = make_shared<long>(boost::any_cast<long>(m["ItemsNumbers"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceAutoRenewalAttributeResponseBody() = default;
};
class DescribeInstanceAutoRenewalAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceAutoRenewalAttributeResponseBody> body{};

  DescribeInstanceAutoRenewalAttributeResponse() {}

  explicit DescribeInstanceAutoRenewalAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeInstanceAutoRenewalAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceAutoRenewalAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceAutoRenewalAttributeResponse() = default;
};
class DescribeKernelReleaseNotesRequest : public Darabonba::Model {
public:
  shared_ptr<string> kernelVersion{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeKernelReleaseNotesRequest() {}

  explicit DescribeKernelReleaseNotesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kernelVersion) {
      res["KernelVersion"] = boost::any(*kernelVersion);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KernelVersion") != m.end() && !m["KernelVersion"].empty()) {
      kernelVersion = make_shared<string>(boost::any_cast<string>(m["KernelVersion"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeKernelReleaseNotesRequest() = default;
};
class DescribeKernelReleaseNotesResponseBodyReleaseNotesReleaseNote : public Darabonba::Model {
public:
  shared_ptr<string> kernelVersion{};
  shared_ptr<string> releaseNote{};

  DescribeKernelReleaseNotesResponseBodyReleaseNotesReleaseNote() {}

  explicit DescribeKernelReleaseNotesResponseBodyReleaseNotesReleaseNote(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kernelVersion) {
      res["KernelVersion"] = boost::any(*kernelVersion);
    }
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KernelVersion") != m.end() && !m["KernelVersion"].empty()) {
      kernelVersion = make_shared<string>(boost::any_cast<string>(m["KernelVersion"]));
    }
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
  }


  virtual ~DescribeKernelReleaseNotesResponseBodyReleaseNotesReleaseNote() = default;
};
class DescribeKernelReleaseNotesResponseBodyReleaseNotes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeKernelReleaseNotesResponseBodyReleaseNotesReleaseNote>> releaseNote{};

  DescribeKernelReleaseNotesResponseBodyReleaseNotes() {}

  explicit DescribeKernelReleaseNotesResponseBodyReleaseNotes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (releaseNote) {
      vector<boost::any> temp1;
      for(auto item1:*releaseNote){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReleaseNote"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      if (typeid(vector<boost::any>) == m["ReleaseNote"].type()) {
        vector<DescribeKernelReleaseNotesResponseBodyReleaseNotesReleaseNote> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReleaseNote"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeKernelReleaseNotesResponseBodyReleaseNotesReleaseNote model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        releaseNote = make_shared<vector<DescribeKernelReleaseNotesResponseBodyReleaseNotesReleaseNote>>(expect1);
      }
    }
  }


  virtual ~DescribeKernelReleaseNotesResponseBodyReleaseNotes() = default;
};
class DescribeKernelReleaseNotesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeKernelReleaseNotesResponseBodyReleaseNotes> releaseNotes{};
  shared_ptr<string> requestId{};

  DescribeKernelReleaseNotesResponseBody() {}

  explicit DescribeKernelReleaseNotesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (releaseNotes) {
      res["ReleaseNotes"] = releaseNotes ? boost::any(releaseNotes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReleaseNotes") != m.end() && !m["ReleaseNotes"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReleaseNotes"].type()) {
        DescribeKernelReleaseNotesResponseBodyReleaseNotes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReleaseNotes"]));
        releaseNotes = make_shared<DescribeKernelReleaseNotesResponseBodyReleaseNotes>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeKernelReleaseNotesResponseBody() = default;
};
class DescribeKernelReleaseNotesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeKernelReleaseNotesResponseBody> body{};

  DescribeKernelReleaseNotesResponse() {}

  explicit DescribeKernelReleaseNotesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeKernelReleaseNotesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeKernelReleaseNotesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeKernelReleaseNotesResponse() = default;
};
class DescribeMongoDBLogConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeMongoDBLogConfigRequest() {}

  explicit DescribeMongoDBLogConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeMongoDBLogConfigRequest() = default;
};
class DescribeMongoDBLogConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> enableAudit{};
  shared_ptr<long> isEtlMetaExist{};
  shared_ptr<long> isUserProjectLogstoreExist{};
  shared_ptr<long> preserveStorageForStandard{};
  shared_ptr<long> preserveStorageForTrail{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceType{};
  shared_ptr<long> ttlForStandard{};
  shared_ptr<long> ttlForTrail{};
  shared_ptr<long> usedStorageForStandard{};
  shared_ptr<long> usedStorageForTrail{};
  shared_ptr<string> userProjectName{};

  DescribeMongoDBLogConfigResponseBody() {}

  explicit DescribeMongoDBLogConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAudit) {
      res["EnableAudit"] = boost::any(*enableAudit);
    }
    if (isEtlMetaExist) {
      res["IsEtlMetaExist"] = boost::any(*isEtlMetaExist);
    }
    if (isUserProjectLogstoreExist) {
      res["IsUserProjectLogstoreExist"] = boost::any(*isUserProjectLogstoreExist);
    }
    if (preserveStorageForStandard) {
      res["PreserveStorageForStandard"] = boost::any(*preserveStorageForStandard);
    }
    if (preserveStorageForTrail) {
      res["PreserveStorageForTrail"] = boost::any(*preserveStorageForTrail);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (ttlForStandard) {
      res["TtlForStandard"] = boost::any(*ttlForStandard);
    }
    if (ttlForTrail) {
      res["TtlForTrail"] = boost::any(*ttlForTrail);
    }
    if (usedStorageForStandard) {
      res["UsedStorageForStandard"] = boost::any(*usedStorageForStandard);
    }
    if (usedStorageForTrail) {
      res["UsedStorageForTrail"] = boost::any(*usedStorageForTrail);
    }
    if (userProjectName) {
      res["UserProjectName"] = boost::any(*userProjectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableAudit") != m.end() && !m["EnableAudit"].empty()) {
      enableAudit = make_shared<bool>(boost::any_cast<bool>(m["EnableAudit"]));
    }
    if (m.find("IsEtlMetaExist") != m.end() && !m["IsEtlMetaExist"].empty()) {
      isEtlMetaExist = make_shared<long>(boost::any_cast<long>(m["IsEtlMetaExist"]));
    }
    if (m.find("IsUserProjectLogstoreExist") != m.end() && !m["IsUserProjectLogstoreExist"].empty()) {
      isUserProjectLogstoreExist = make_shared<long>(boost::any_cast<long>(m["IsUserProjectLogstoreExist"]));
    }
    if (m.find("PreserveStorageForStandard") != m.end() && !m["PreserveStorageForStandard"].empty()) {
      preserveStorageForStandard = make_shared<long>(boost::any_cast<long>(m["PreserveStorageForStandard"]));
    }
    if (m.find("PreserveStorageForTrail") != m.end() && !m["PreserveStorageForTrail"].empty()) {
      preserveStorageForTrail = make_shared<long>(boost::any_cast<long>(m["PreserveStorageForTrail"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("TtlForStandard") != m.end() && !m["TtlForStandard"].empty()) {
      ttlForStandard = make_shared<long>(boost::any_cast<long>(m["TtlForStandard"]));
    }
    if (m.find("TtlForTrail") != m.end() && !m["TtlForTrail"].empty()) {
      ttlForTrail = make_shared<long>(boost::any_cast<long>(m["TtlForTrail"]));
    }
    if (m.find("UsedStorageForStandard") != m.end() && !m["UsedStorageForStandard"].empty()) {
      usedStorageForStandard = make_shared<long>(boost::any_cast<long>(m["UsedStorageForStandard"]));
    }
    if (m.find("UsedStorageForTrail") != m.end() && !m["UsedStorageForTrail"].empty()) {
      usedStorageForTrail = make_shared<long>(boost::any_cast<long>(m["UsedStorageForTrail"]));
    }
    if (m.find("UserProjectName") != m.end() && !m["UserProjectName"].empty()) {
      userProjectName = make_shared<string>(boost::any_cast<string>(m["UserProjectName"]));
    }
  }


  virtual ~DescribeMongoDBLogConfigResponseBody() = default;
};
class DescribeMongoDBLogConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMongoDBLogConfigResponseBody> body{};

  DescribeMongoDBLogConfigResponse() {}

  explicit DescribeMongoDBLogConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMongoDBLogConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMongoDBLogConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMongoDBLogConfigResponse() = default;
};
class DescribeParameterModificationHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> characterType{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> startTime{};

  DescribeParameterModificationHistoryRequest() {}

  explicit DescribeParameterModificationHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeParameterModificationHistoryRequest() = default;
};
class DescribeParameterModificationHistoryResponseBodyHistoricalParametersHistoricalParameter : public Darabonba::Model {
public:
  shared_ptr<string> modifyTime{};
  shared_ptr<string> newParameterValue{};
  shared_ptr<string> oldParameterValue{};
  shared_ptr<string> parameterName{};

  DescribeParameterModificationHistoryResponseBodyHistoricalParametersHistoricalParameter() {}

  explicit DescribeParameterModificationHistoryResponseBodyHistoricalParametersHistoricalParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (newParameterValue) {
      res["NewParameterValue"] = boost::any(*newParameterValue);
    }
    if (oldParameterValue) {
      res["OldParameterValue"] = boost::any(*oldParameterValue);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("NewParameterValue") != m.end() && !m["NewParameterValue"].empty()) {
      newParameterValue = make_shared<string>(boost::any_cast<string>(m["NewParameterValue"]));
    }
    if (m.find("OldParameterValue") != m.end() && !m["OldParameterValue"].empty()) {
      oldParameterValue = make_shared<string>(boost::any_cast<string>(m["OldParameterValue"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
  }


  virtual ~DescribeParameterModificationHistoryResponseBodyHistoricalParametersHistoricalParameter() = default;
};
class DescribeParameterModificationHistoryResponseBodyHistoricalParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParameterModificationHistoryResponseBodyHistoricalParametersHistoricalParameter>> historicalParameter{};

  DescribeParameterModificationHistoryResponseBodyHistoricalParameters() {}

  explicit DescribeParameterModificationHistoryResponseBodyHistoricalParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historicalParameter) {
      vector<boost::any> temp1;
      for(auto item1:*historicalParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoricalParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HistoricalParameter") != m.end() && !m["HistoricalParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoricalParameter"].type()) {
        vector<DescribeParameterModificationHistoryResponseBodyHistoricalParametersHistoricalParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoricalParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParameterModificationHistoryResponseBodyHistoricalParametersHistoricalParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historicalParameter = make_shared<vector<DescribeParameterModificationHistoryResponseBodyHistoricalParametersHistoricalParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeParameterModificationHistoryResponseBodyHistoricalParameters() = default;
};
class DescribeParameterModificationHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeParameterModificationHistoryResponseBodyHistoricalParameters> historicalParameters{};
  shared_ptr<string> requestId{};

  DescribeParameterModificationHistoryResponseBody() {}

  explicit DescribeParameterModificationHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historicalParameters) {
      res["HistoricalParameters"] = historicalParameters ? boost::any(historicalParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HistoricalParameters") != m.end() && !m["HistoricalParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["HistoricalParameters"].type()) {
        DescribeParameterModificationHistoryResponseBodyHistoricalParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HistoricalParameters"]));
        historicalParameters = make_shared<DescribeParameterModificationHistoryResponseBodyHistoricalParameters>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeParameterModificationHistoryResponseBody() = default;
};
class DescribeParameterModificationHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeParameterModificationHistoryResponseBody> body{};

  DescribeParameterModificationHistoryResponse() {}

  explicit DescribeParameterModificationHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeParameterModificationHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParameterModificationHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParameterModificationHistoryResponse() = default;
};
class DescribeParameterTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeParameterTemplatesRequest() {}

  explicit DescribeParameterTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeParameterTemplatesRequest() = default;
};
class DescribeParameterTemplatesResponseBodyParametersTemplateRecord : public Darabonba::Model {
public:
  shared_ptr<string> checkingCode{};
  shared_ptr<bool> forceModify{};
  shared_ptr<bool> forceRestart{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  DescribeParameterTemplatesResponseBodyParametersTemplateRecord() {}

  explicit DescribeParameterTemplatesResponseBodyParametersTemplateRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkingCode) {
      res["CheckingCode"] = boost::any(*checkingCode);
    }
    if (forceModify) {
      res["ForceModify"] = boost::any(*forceModify);
    }
    if (forceRestart) {
      res["ForceRestart"] = boost::any(*forceRestart);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckingCode") != m.end() && !m["CheckingCode"].empty()) {
      checkingCode = make_shared<string>(boost::any_cast<string>(m["CheckingCode"]));
    }
    if (m.find("ForceModify") != m.end() && !m["ForceModify"].empty()) {
      forceModify = make_shared<bool>(boost::any_cast<bool>(m["ForceModify"]));
    }
    if (m.find("ForceRestart") != m.end() && !m["ForceRestart"].empty()) {
      forceRestart = make_shared<bool>(boost::any_cast<bool>(m["ForceRestart"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~DescribeParameterTemplatesResponseBodyParametersTemplateRecord() = default;
};
class DescribeParameterTemplatesResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParameterTemplatesResponseBodyParametersTemplateRecord>> templateRecord{};

  DescribeParameterTemplatesResponseBodyParameters() {}

  explicit DescribeParameterTemplatesResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateRecord) {
      vector<boost::any> temp1;
      for(auto item1:*templateRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplateRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateRecord") != m.end() && !m["TemplateRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplateRecord"].type()) {
        vector<DescribeParameterTemplatesResponseBodyParametersTemplateRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplateRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParameterTemplatesResponseBodyParametersTemplateRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templateRecord = make_shared<vector<DescribeParameterTemplatesResponseBodyParametersTemplateRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeParameterTemplatesResponseBodyParameters() = default;
};
class DescribeParameterTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> parameterCount{};
  shared_ptr<DescribeParameterTemplatesResponseBodyParameters> parameters{};
  shared_ptr<string> requestId{};

  DescribeParameterTemplatesResponseBody() {}

  explicit DescribeParameterTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (parameterCount) {
      res["ParameterCount"] = boost::any(*parameterCount);
    }
    if (parameters) {
      res["Parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ParameterCount") != m.end() && !m["ParameterCount"].empty()) {
      parameterCount = make_shared<string>(boost::any_cast<string>(m["ParameterCount"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["Parameters"].type()) {
        DescribeParameterTemplatesResponseBodyParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameters"]));
        parameters = make_shared<DescribeParameterTemplatesResponseBodyParameters>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeParameterTemplatesResponseBody() = default;
};
class DescribeParameterTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeParameterTemplatesResponseBody> body{};

  DescribeParameterTemplatesResponse() {}

  explicit DescribeParameterTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeParameterTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParameterTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParameterTemplatesResponse() = default;
};
class DescribeParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> characterType{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeParametersRequest() {}

  explicit DescribeParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeParametersRequest() = default;
};
class DescribeParametersResponseBodyConfigParametersParameter : public Darabonba::Model {
public:
  shared_ptr<string> checkingCode{};
  shared_ptr<bool> forceRestart{};
  shared_ptr<bool> modifiableStatus{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  DescribeParametersResponseBodyConfigParametersParameter() {}

  explicit DescribeParametersResponseBodyConfigParametersParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkingCode) {
      res["CheckingCode"] = boost::any(*checkingCode);
    }
    if (forceRestart) {
      res["ForceRestart"] = boost::any(*forceRestart);
    }
    if (modifiableStatus) {
      res["ModifiableStatus"] = boost::any(*modifiableStatus);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckingCode") != m.end() && !m["CheckingCode"].empty()) {
      checkingCode = make_shared<string>(boost::any_cast<string>(m["CheckingCode"]));
    }
    if (m.find("ForceRestart") != m.end() && !m["ForceRestart"].empty()) {
      forceRestart = make_shared<bool>(boost::any_cast<bool>(m["ForceRestart"]));
    }
    if (m.find("ModifiableStatus") != m.end() && !m["ModifiableStatus"].empty()) {
      modifiableStatus = make_shared<bool>(boost::any_cast<bool>(m["ModifiableStatus"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~DescribeParametersResponseBodyConfigParametersParameter() = default;
};
class DescribeParametersResponseBodyConfigParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParametersResponseBodyConfigParametersParameter>> parameter{};

  DescribeParametersResponseBodyConfigParameters() {}

  explicit DescribeParametersResponseBodyConfigParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      vector<boost::any> temp1;
      for(auto item1:*parameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameter"].type()) {
        vector<DescribeParametersResponseBodyConfigParametersParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParametersResponseBodyConfigParametersParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameter = make_shared<vector<DescribeParametersResponseBodyConfigParametersParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeParametersResponseBodyConfigParameters() = default;
};
class DescribeParametersResponseBodyRunningParametersParameter : public Darabonba::Model {
public:
  shared_ptr<string> checkingCode{};
  shared_ptr<string> forceRestart{};
  shared_ptr<string> modifiableStatus{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};

  DescribeParametersResponseBodyRunningParametersParameter() {}

  explicit DescribeParametersResponseBodyRunningParametersParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkingCode) {
      res["CheckingCode"] = boost::any(*checkingCode);
    }
    if (forceRestart) {
      res["ForceRestart"] = boost::any(*forceRestart);
    }
    if (modifiableStatus) {
      res["ModifiableStatus"] = boost::any(*modifiableStatus);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckingCode") != m.end() && !m["CheckingCode"].empty()) {
      checkingCode = make_shared<string>(boost::any_cast<string>(m["CheckingCode"]));
    }
    if (m.find("ForceRestart") != m.end() && !m["ForceRestart"].empty()) {
      forceRestart = make_shared<string>(boost::any_cast<string>(m["ForceRestart"]));
    }
    if (m.find("ModifiableStatus") != m.end() && !m["ModifiableStatus"].empty()) {
      modifiableStatus = make_shared<string>(boost::any_cast<string>(m["ModifiableStatus"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
  }


  virtual ~DescribeParametersResponseBodyRunningParametersParameter() = default;
};
class DescribeParametersResponseBodyRunningParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeParametersResponseBodyRunningParametersParameter>> parameter{};

  DescribeParametersResponseBodyRunningParameters() {}

  explicit DescribeParametersResponseBodyRunningParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      vector<boost::any> temp1;
      for(auto item1:*parameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameter"].type()) {
        vector<DescribeParametersResponseBodyRunningParametersParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParametersResponseBodyRunningParametersParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameter = make_shared<vector<DescribeParametersResponseBodyRunningParametersParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeParametersResponseBodyRunningParameters() = default;
};
class DescribeParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeParametersResponseBodyConfigParameters> configParameters{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeParametersResponseBodyRunningParameters> runningParameters{};

  DescribeParametersResponseBody() {}

  explicit DescribeParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configParameters) {
      res["ConfigParameters"] = configParameters ? boost::any(configParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runningParameters) {
      res["RunningParameters"] = runningParameters ? boost::any(runningParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigParameters") != m.end() && !m["ConfigParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigParameters"].type()) {
        DescribeParametersResponseBodyConfigParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigParameters"]));
        configParameters = make_shared<DescribeParametersResponseBodyConfigParameters>(model1);
      }
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunningParameters") != m.end() && !m["RunningParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunningParameters"].type()) {
        DescribeParametersResponseBodyRunningParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunningParameters"]));
        runningParameters = make_shared<DescribeParametersResponseBodyRunningParameters>(model1);
      }
    }
  }


  virtual ~DescribeParametersResponseBody() = default;
};
class DescribeParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeParametersResponseBody> body{};

  DescribeParametersResponse() {}

  explicit DescribeParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParametersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParametersResponse() = default;
};
class DescribePriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessInfo{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> DBInstances{};
  shared_ptr<string> orderParamOut{};
  shared_ptr<string> orderType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribePriceRequest() {}

  explicit DescribePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (DBInstances) {
      res["DBInstances"] = boost::any(*DBInstances);
    }
    if (orderParamOut) {
      res["OrderParamOut"] = boost::any(*orderParamOut);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("DBInstances") != m.end() && !m["DBInstances"].empty()) {
      DBInstances = make_shared<string>(boost::any_cast<string>(m["DBInstances"]));
    }
    if (m.find("OrderParamOut") != m.end() && !m["OrderParamOut"].empty()) {
      orderParamOut = make_shared<string>(boost::any_cast<string>(m["OrderParamOut"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribePriceRequest() = default;
};
class DescribePriceResponseBodyOrderCouponsCoupon : public Darabonba::Model {
public:
  shared_ptr<string> couponNo{};
  shared_ptr<string> description{};
  shared_ptr<string> isSelected{};
  shared_ptr<string> name{};

  DescribePriceResponseBodyOrderCouponsCoupon() {}

  explicit DescribePriceResponseBodyOrderCouponsCoupon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (isSelected) {
      res["IsSelected"] = boost::any(*isSelected);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IsSelected") != m.end() && !m["IsSelected"].empty()) {
      isSelected = make_shared<string>(boost::any_cast<string>(m["IsSelected"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribePriceResponseBodyOrderCouponsCoupon() = default;
};
class DescribePriceResponseBodyOrderCoupons : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePriceResponseBodyOrderCouponsCoupon>> coupon{};

  DescribePriceResponseBodyOrderCoupons() {}

  explicit DescribePriceResponseBodyOrderCoupons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coupon) {
      vector<boost::any> temp1;
      for(auto item1:*coupon){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Coupon"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coupon") != m.end() && !m["Coupon"].empty()) {
      if (typeid(vector<boost::any>) == m["Coupon"].type()) {
        vector<DescribePriceResponseBodyOrderCouponsCoupon> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Coupon"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodyOrderCouponsCoupon model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coupon = make_shared<vector<DescribePriceResponseBodyOrderCouponsCoupon>>(expect1);
      }
    }
  }


  virtual ~DescribePriceResponseBodyOrderCoupons() = default;
};
class DescribePriceResponseBodyOrderRuleIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ruleId{};

  DescribePriceResponseBodyOrderRuleIds() {}

  explicit DescribePriceResponseBodyOrderRuleIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePriceResponseBodyOrderRuleIds() = default;
};
class DescribePriceResponseBodyOrder : public Darabonba::Model {
public:
  shared_ptr<DescribePriceResponseBodyOrderCoupons> coupons{};
  shared_ptr<string> currency{};
  shared_ptr<string> discountAmount{};
  shared_ptr<string> originalAmount{};
  shared_ptr<DescribePriceResponseBodyOrderRuleIds> ruleIds{};
  shared_ptr<string> tradeAmount{};

  DescribePriceResponseBodyOrder() {}

  explicit DescribePriceResponseBodyOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coupons) {
      res["Coupons"] = coupons ? boost::any(coupons->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (ruleIds) {
      res["RuleIds"] = ruleIds ? boost::any(ruleIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coupons") != m.end() && !m["Coupons"].empty()) {
      if (typeid(map<string, boost::any>) == m["Coupons"].type()) {
        DescribePriceResponseBodyOrderCoupons model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Coupons"]));
        coupons = make_shared<DescribePriceResponseBodyOrderCoupons>(model1);
      }
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<string>(boost::any_cast<string>(m["DiscountAmount"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<string>(boost::any_cast<string>(m["OriginalAmount"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleIds"].type()) {
        DescribePriceResponseBodyOrderRuleIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleIds"]));
        ruleIds = make_shared<DescribePriceResponseBodyOrderRuleIds>(model1);
      }
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<string>(boost::any_cast<string>(m["TradeAmount"]));
    }
  }


  virtual ~DescribePriceResponseBodyOrder() = default;
};
class DescribePriceResponseBodyRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> ruleDescId{};
  shared_ptr<string> title{};

  DescribePriceResponseBodyRulesRule() {}

  explicit DescribePriceResponseBodyRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleDescId) {
      res["RuleDescId"] = boost::any(*ruleDescId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleDescId") != m.end() && !m["RuleDescId"].empty()) {
      ruleDescId = make_shared<long>(boost::any_cast<long>(m["RuleDescId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribePriceResponseBodyRulesRule() = default;
};
class DescribePriceResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePriceResponseBodyRulesRule>> rule{};

  DescribePriceResponseBodyRules() {}

  explicit DescribePriceResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribePriceResponseBodyRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodyRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribePriceResponseBodyRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribePriceResponseBodyRules() = default;
};
class DescribePriceResponseBodySubOrdersSubOrderRuleIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ruleId{};

  DescribePriceResponseBodySubOrdersSubOrderRuleIds() {}

  explicit DescribePriceResponseBodySubOrdersSubOrderRuleIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePriceResponseBodySubOrdersSubOrderRuleIds() = default;
};
class DescribePriceResponseBodySubOrdersSubOrder : public Darabonba::Model {
public:
  shared_ptr<string> discountAmount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> originalAmount{};
  shared_ptr<DescribePriceResponseBodySubOrdersSubOrderRuleIds> ruleIds{};
  shared_ptr<string> tradeAmount{};

  DescribePriceResponseBodySubOrdersSubOrder() {}

  explicit DescribePriceResponseBodySubOrdersSubOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (ruleIds) {
      res["RuleIds"] = ruleIds ? boost::any(ruleIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<string>(boost::any_cast<string>(m["DiscountAmount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<string>(boost::any_cast<string>(m["OriginalAmount"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleIds"].type()) {
        DescribePriceResponseBodySubOrdersSubOrderRuleIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleIds"]));
        ruleIds = make_shared<DescribePriceResponseBodySubOrdersSubOrderRuleIds>(model1);
      }
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<string>(boost::any_cast<string>(m["TradeAmount"]));
    }
  }


  virtual ~DescribePriceResponseBodySubOrdersSubOrder() = default;
};
class DescribePriceResponseBodySubOrders : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePriceResponseBodySubOrdersSubOrder>> subOrder{};

  DescribePriceResponseBodySubOrders() {}

  explicit DescribePriceResponseBodySubOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subOrder) {
      vector<boost::any> temp1;
      for(auto item1:*subOrder){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubOrder"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubOrder") != m.end() && !m["SubOrder"].empty()) {
      if (typeid(vector<boost::any>) == m["SubOrder"].type()) {
        vector<DescribePriceResponseBodySubOrdersSubOrder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubOrder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodySubOrdersSubOrder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subOrder = make_shared<vector<DescribePriceResponseBodySubOrdersSubOrder>>(expect1);
      }
    }
  }


  virtual ~DescribePriceResponseBodySubOrders() = default;
};
class DescribePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePriceResponseBodyOrder> order{};
  shared_ptr<string> orderParams{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribePriceResponseBodyRules> rules{};
  shared_ptr<DescribePriceResponseBodySubOrders> subOrders{};
  shared_ptr<string> traceId{};

  DescribePriceResponseBody() {}

  explicit DescribePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = order ? boost::any(order->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderParams) {
      res["OrderParams"] = boost::any(*orderParams);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subOrders) {
      res["SubOrders"] = subOrders ? boost::any(subOrders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(map<string, boost::any>) == m["Order"].type()) {
        DescribePriceResponseBodyOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Order"]));
        order = make_shared<DescribePriceResponseBodyOrder>(model1);
      }
    }
    if (m.find("OrderParams") != m.end() && !m["OrderParams"].empty()) {
      orderParams = make_shared<string>(boost::any_cast<string>(m["OrderParams"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribePriceResponseBodyRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribePriceResponseBodyRules>(model1);
      }
    }
    if (m.find("SubOrders") != m.end() && !m["SubOrders"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubOrders"].type()) {
        DescribePriceResponseBodySubOrders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubOrders"]));
        subOrders = make_shared<DescribePriceResponseBodySubOrders>(model1);
      }
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
  }


  virtual ~DescribePriceResponseBody() = default;
};
class DescribePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePriceResponseBody> body{};

  DescribePriceResponse() {}

  explicit DescribePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePriceResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsDdsRegionZonesZone : public Darabonba::Model {
public:
  shared_ptr<bool> vpcEnabled{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> zoneName{};

  DescribeRegionsResponseBodyRegionsDdsRegionZonesZone() {}

  explicit DescribeRegionsResponseBodyRegionsDdsRegionZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcEnabled) {
      res["VpcEnabled"] = boost::any(*vpcEnabled);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (zoneName) {
      res["ZoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcEnabled") != m.end() && !m["VpcEnabled"].empty()) {
      vpcEnabled = make_shared<bool>(boost::any_cast<bool>(m["VpcEnabled"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ZoneName") != m.end() && !m["ZoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["ZoneName"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsDdsRegionZonesZone() = default;
};
class DescribeRegionsResponseBodyRegionsDdsRegionZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsDdsRegionZonesZone>> zone{};

  DescribeRegionsResponseBodyRegionsDdsRegionZones() {}

  explicit DescribeRegionsResponseBodyRegionsDdsRegionZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<DescribeRegionsResponseBodyRegionsDdsRegionZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsDdsRegionZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeRegionsResponseBodyRegionsDdsRegionZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsDdsRegionZones() = default;
};
class DescribeRegionsResponseBodyRegionsDdsRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};
  shared_ptr<DescribeRegionsResponseBodyRegionsDdsRegionZones> zones{};

  DescribeRegionsResponseBodyRegionsDdsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsDdsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeRegionsResponseBodyRegionsDdsRegionZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeRegionsResponseBodyRegionsDdsRegionZones>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsDdsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsDdsRegion>> ddsRegion{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddsRegion) {
      vector<boost::any> temp1;
      for(auto item1:*ddsRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DdsRegion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdsRegion") != m.end() && !m["DdsRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["DdsRegion"].type()) {
        vector<DescribeRegionsResponseBodyRegionsDdsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DdsRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsDdsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ddsRegion = make_shared<vector<DescribeRegionsResponseBodyRegionsDdsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeRenewalPriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessInfo{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeRenewalPriceRequest() {}

  explicit DescribeRenewalPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeRenewalPriceRequest() = default;
};
class DescribeRenewalPriceResponseBodyOrderCouponsCoupon : public Darabonba::Model {
public:
  shared_ptr<string> couponNo{};
  shared_ptr<string> description{};
  shared_ptr<string> isSelected{};
  shared_ptr<string> name{};

  DescribeRenewalPriceResponseBodyOrderCouponsCoupon() {}

  explicit DescribeRenewalPriceResponseBodyOrderCouponsCoupon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (isSelected) {
      res["IsSelected"] = boost::any(*isSelected);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IsSelected") != m.end() && !m["IsSelected"].empty()) {
      isSelected = make_shared<string>(boost::any_cast<string>(m["IsSelected"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeRenewalPriceResponseBodyOrderCouponsCoupon() = default;
};
class DescribeRenewalPriceResponseBodyOrderCoupons : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRenewalPriceResponseBodyOrderCouponsCoupon>> coupon{};

  DescribeRenewalPriceResponseBodyOrderCoupons() {}

  explicit DescribeRenewalPriceResponseBodyOrderCoupons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coupon) {
      vector<boost::any> temp1;
      for(auto item1:*coupon){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Coupon"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coupon") != m.end() && !m["Coupon"].empty()) {
      if (typeid(vector<boost::any>) == m["Coupon"].type()) {
        vector<DescribeRenewalPriceResponseBodyOrderCouponsCoupon> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Coupon"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRenewalPriceResponseBodyOrderCouponsCoupon model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        coupon = make_shared<vector<DescribeRenewalPriceResponseBodyOrderCouponsCoupon>>(expect1);
      }
    }
  }


  virtual ~DescribeRenewalPriceResponseBodyOrderCoupons() = default;
};
class DescribeRenewalPriceResponseBodyOrderRuleIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ruleId{};

  DescribeRenewalPriceResponseBodyOrderRuleIds() {}

  explicit DescribeRenewalPriceResponseBodyOrderRuleIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRenewalPriceResponseBodyOrderRuleIds() = default;
};
class DescribeRenewalPriceResponseBodyOrder : public Darabonba::Model {
public:
  shared_ptr<DescribeRenewalPriceResponseBodyOrderCoupons> coupons{};
  shared_ptr<string> currency{};
  shared_ptr<double> discountAmount{};
  shared_ptr<double> originalAmount{};
  shared_ptr<DescribeRenewalPriceResponseBodyOrderRuleIds> ruleIds{};
  shared_ptr<double> tradeAmount{};

  DescribeRenewalPriceResponseBodyOrder() {}

  explicit DescribeRenewalPriceResponseBodyOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coupons) {
      res["Coupons"] = coupons ? boost::any(coupons->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (ruleIds) {
      res["RuleIds"] = ruleIds ? boost::any(ruleIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coupons") != m.end() && !m["Coupons"].empty()) {
      if (typeid(map<string, boost::any>) == m["Coupons"].type()) {
        DescribeRenewalPriceResponseBodyOrderCoupons model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Coupons"]));
        coupons = make_shared<DescribeRenewalPriceResponseBodyOrderCoupons>(model1);
      }
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleIds"].type()) {
        DescribeRenewalPriceResponseBodyOrderRuleIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleIds"]));
        ruleIds = make_shared<DescribeRenewalPriceResponseBodyOrderRuleIds>(model1);
      }
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<double>(boost::any_cast<double>(m["TradeAmount"]));
    }
  }


  virtual ~DescribeRenewalPriceResponseBodyOrder() = default;
};
class DescribeRenewalPriceResponseBodyRulesRule : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> ruleDescId{};
  shared_ptr<string> title{};

  DescribeRenewalPriceResponseBodyRulesRule() {}

  explicit DescribeRenewalPriceResponseBodyRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ruleDescId) {
      res["RuleDescId"] = boost::any(*ruleDescId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RuleDescId") != m.end() && !m["RuleDescId"].empty()) {
      ruleDescId = make_shared<long>(boost::any_cast<long>(m["RuleDescId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeRenewalPriceResponseBodyRulesRule() = default;
};
class DescribeRenewalPriceResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRenewalPriceResponseBodyRulesRule>> rule{};

  DescribeRenewalPriceResponseBodyRules() {}

  explicit DescribeRenewalPriceResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribeRenewalPriceResponseBodyRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRenewalPriceResponseBodyRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribeRenewalPriceResponseBodyRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribeRenewalPriceResponseBodyRules() = default;
};
class DescribeRenewalPriceResponseBodySubOrdersSubOrderRuleIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ruleId{};

  DescribeRenewalPriceResponseBodySubOrdersSubOrderRuleIds() {}

  explicit DescribeRenewalPriceResponseBodySubOrdersSubOrderRuleIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RuleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RuleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ruleId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRenewalPriceResponseBodySubOrdersSubOrderRuleIds() = default;
};
class DescribeRenewalPriceResponseBodySubOrdersSubOrder : public Darabonba::Model {
public:
  shared_ptr<double> discountAmount{};
  shared_ptr<string> instanceId{};
  shared_ptr<double> originalAmount{};
  shared_ptr<DescribeRenewalPriceResponseBodySubOrdersSubOrderRuleIds> ruleIds{};
  shared_ptr<double> tradeAmount{};

  DescribeRenewalPriceResponseBodySubOrdersSubOrder() {}

  explicit DescribeRenewalPriceResponseBodySubOrdersSubOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (discountAmount) {
      res["DiscountAmount"] = boost::any(*discountAmount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (ruleIds) {
      res["RuleIds"] = ruleIds ? boost::any(ruleIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiscountAmount") != m.end() && !m["DiscountAmount"].empty()) {
      discountAmount = make_shared<double>(boost::any_cast<double>(m["DiscountAmount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("RuleIds") != m.end() && !m["RuleIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuleIds"].type()) {
        DescribeRenewalPriceResponseBodySubOrdersSubOrderRuleIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuleIds"]));
        ruleIds = make_shared<DescribeRenewalPriceResponseBodySubOrdersSubOrderRuleIds>(model1);
      }
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<double>(boost::any_cast<double>(m["TradeAmount"]));
    }
  }


  virtual ~DescribeRenewalPriceResponseBodySubOrdersSubOrder() = default;
};
class DescribeRenewalPriceResponseBodySubOrders : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRenewalPriceResponseBodySubOrdersSubOrder>> subOrder{};

  DescribeRenewalPriceResponseBodySubOrders() {}

  explicit DescribeRenewalPriceResponseBodySubOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subOrder) {
      vector<boost::any> temp1;
      for(auto item1:*subOrder){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubOrder"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubOrder") != m.end() && !m["SubOrder"].empty()) {
      if (typeid(vector<boost::any>) == m["SubOrder"].type()) {
        vector<DescribeRenewalPriceResponseBodySubOrdersSubOrder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubOrder"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRenewalPriceResponseBodySubOrdersSubOrder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subOrder = make_shared<vector<DescribeRenewalPriceResponseBodySubOrdersSubOrder>>(expect1);
      }
    }
  }


  virtual ~DescribeRenewalPriceResponseBodySubOrders() = default;
};
class DescribeRenewalPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRenewalPriceResponseBodyOrder> order{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRenewalPriceResponseBodyRules> rules{};
  shared_ptr<DescribeRenewalPriceResponseBodySubOrders> subOrders{};

  DescribeRenewalPriceResponseBody() {}

  explicit DescribeRenewalPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = order ? boost::any(order->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subOrders) {
      res["SubOrders"] = subOrders ? boost::any(subOrders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(map<string, boost::any>) == m["Order"].type()) {
        DescribeRenewalPriceResponseBodyOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Order"]));
        order = make_shared<DescribeRenewalPriceResponseBodyOrder>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribeRenewalPriceResponseBodyRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribeRenewalPriceResponseBodyRules>(model1);
      }
    }
    if (m.find("SubOrders") != m.end() && !m["SubOrders"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubOrders"].type()) {
        DescribeRenewalPriceResponseBodySubOrders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubOrders"]));
        subOrders = make_shared<DescribeRenewalPriceResponseBodySubOrders>(model1);
      }
    }
  }


  virtual ~DescribeRenewalPriceResponseBody() = default;
};
class DescribeRenewalPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRenewalPriceResponseBody> body{};

  DescribeRenewalPriceResponse() {}

  explicit DescribeRenewalPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRenewalPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRenewalPriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRenewalPriceResponse() = default;
};
class DescribeReplicaSetRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeReplicaSetRoleRequest() {}

  explicit DescribeReplicaSetRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeReplicaSetRoleRequest() = default;
};
class DescribeReplicaSetRoleResponseBodyReplicaSetsReplicaSet : public Darabonba::Model {
public:
  shared_ptr<string> connectionDomain{};
  shared_ptr<string> connectionPort{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> networkType{};
  shared_ptr<string> replicaSetRole{};
  shared_ptr<string> roleId{};

  DescribeReplicaSetRoleResponseBodyReplicaSetsReplicaSet() {}

  explicit DescribeReplicaSetRoleResponseBodyReplicaSetsReplicaSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionDomain) {
      res["ConnectionDomain"] = boost::any(*connectionDomain);
    }
    if (connectionPort) {
      res["ConnectionPort"] = boost::any(*connectionPort);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (replicaSetRole) {
      res["ReplicaSetRole"] = boost::any(*replicaSetRole);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionDomain") != m.end() && !m["ConnectionDomain"].empty()) {
      connectionDomain = make_shared<string>(boost::any_cast<string>(m["ConnectionDomain"]));
    }
    if (m.find("ConnectionPort") != m.end() && !m["ConnectionPort"].empty()) {
      connectionPort = make_shared<string>(boost::any_cast<string>(m["ConnectionPort"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("ReplicaSetRole") != m.end() && !m["ReplicaSetRole"].empty()) {
      replicaSetRole = make_shared<string>(boost::any_cast<string>(m["ReplicaSetRole"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
  }


  virtual ~DescribeReplicaSetRoleResponseBodyReplicaSetsReplicaSet() = default;
};
class DescribeReplicaSetRoleResponseBodyReplicaSets : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeReplicaSetRoleResponseBodyReplicaSetsReplicaSet>> replicaSet{};

  DescribeReplicaSetRoleResponseBodyReplicaSets() {}

  explicit DescribeReplicaSetRoleResponseBodyReplicaSets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (replicaSet) {
      vector<boost::any> temp1;
      for(auto item1:*replicaSet){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReplicaSet"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReplicaSet") != m.end() && !m["ReplicaSet"].empty()) {
      if (typeid(vector<boost::any>) == m["ReplicaSet"].type()) {
        vector<DescribeReplicaSetRoleResponseBodyReplicaSetsReplicaSet> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReplicaSet"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeReplicaSetRoleResponseBodyReplicaSetsReplicaSet model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        replicaSet = make_shared<vector<DescribeReplicaSetRoleResponseBodyReplicaSetsReplicaSet>>(expect1);
      }
    }
  }


  virtual ~DescribeReplicaSetRoleResponseBodyReplicaSets() = default;
};
class DescribeReplicaSetRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<DescribeReplicaSetRoleResponseBodyReplicaSets> replicaSets{};
  shared_ptr<string> requestId{};

  DescribeReplicaSetRoleResponseBody() {}

  explicit DescribeReplicaSetRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (replicaSets) {
      res["ReplicaSets"] = replicaSets ? boost::any(replicaSets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ReplicaSets") != m.end() && !m["ReplicaSets"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReplicaSets"].type()) {
        DescribeReplicaSetRoleResponseBodyReplicaSets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReplicaSets"]));
        replicaSets = make_shared<DescribeReplicaSetRoleResponseBodyReplicaSets>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeReplicaSetRoleResponseBody() = default;
};
class DescribeReplicaSetRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeReplicaSetRoleResponseBody> body{};

  DescribeReplicaSetRoleResponse() {}

  explicit DescribeReplicaSetRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeReplicaSetRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeReplicaSetRoleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeReplicaSetRoleResponse() = default;
};
class DescribeRoleZoneInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeRoleZoneInfoRequest() {}

  explicit DescribeRoleZoneInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeRoleZoneInfoRequest() = default;
};
class DescribeRoleZoneInfoResponseBodyZoneInfosZoneInfo : public Darabonba::Model {
public:
  shared_ptr<string> insName{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleType{};
  shared_ptr<string> zoneId{};

  DescribeRoleZoneInfoResponseBodyZoneInfosZoneInfo() {}

  explicit DescribeRoleZoneInfoResponseBodyZoneInfosZoneInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (insName) {
      res["InsName"] = boost::any(*insName);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InsName") != m.end() && !m["InsName"].empty()) {
      insName = make_shared<string>(boost::any_cast<string>(m["InsName"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRoleZoneInfoResponseBodyZoneInfosZoneInfo() = default;
};
class DescribeRoleZoneInfoResponseBodyZoneInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRoleZoneInfoResponseBodyZoneInfosZoneInfo>> zoneInfo{};

  DescribeRoleZoneInfoResponseBodyZoneInfos() {}

  explicit DescribeRoleZoneInfoResponseBodyZoneInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneInfo) {
      vector<boost::any> temp1;
      for(auto item1:*zoneInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneInfo") != m.end() && !m["ZoneInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneInfo"].type()) {
        vector<DescribeRoleZoneInfoResponseBodyZoneInfosZoneInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRoleZoneInfoResponseBodyZoneInfosZoneInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneInfo = make_shared<vector<DescribeRoleZoneInfoResponseBodyZoneInfosZoneInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeRoleZoneInfoResponseBodyZoneInfos() = default;
};
class DescribeRoleZoneInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRoleZoneInfoResponseBodyZoneInfos> zoneInfos{};

  DescribeRoleZoneInfoResponseBody() {}

  explicit DescribeRoleZoneInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zoneInfos) {
      res["ZoneInfos"] = zoneInfos ? boost::any(zoneInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ZoneInfos") != m.end() && !m["ZoneInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZoneInfos"].type()) {
        DescribeRoleZoneInfoResponseBodyZoneInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZoneInfos"]));
        zoneInfos = make_shared<DescribeRoleZoneInfoResponseBodyZoneInfos>(model1);
      }
    }
  }


  virtual ~DescribeRoleZoneInfoResponseBody() = default;
};
class DescribeRoleZoneInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRoleZoneInfoResponseBody> body{};

  DescribeRoleZoneInfoResponse() {}

  explicit DescribeRoleZoneInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRoleZoneInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRoleZoneInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRoleZoneInfoResponse() = default;
};
class DescribeRunningLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> orderType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleType{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> startTime{};

  DescribeRunningLogRecordsRequest() {}

  explicit DescribeRunningLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeRunningLogRecordsRequest() = default;
};
class DescribeRunningLogRecordsResponseBodyItemsLogRecords : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> connInfo{};
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<long> id{};

  DescribeRunningLogRecordsResponseBodyItemsLogRecords() {}

  explicit DescribeRunningLogRecordsResponseBodyItemsLogRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (connInfo) {
      res["ConnInfo"] = boost::any(*connInfo);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ConnInfo") != m.end() && !m["ConnInfo"].empty()) {
      connInfo = make_shared<string>(boost::any_cast<string>(m["ConnInfo"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DescribeRunningLogRecordsResponseBodyItemsLogRecords() = default;
};
class DescribeRunningLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRunningLogRecordsResponseBodyItemsLogRecords>> logRecords{};

  DescribeRunningLogRecordsResponseBodyItems() {}

  explicit DescribeRunningLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logRecords) {
      vector<boost::any> temp1;
      for(auto item1:*logRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogRecords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogRecords") != m.end() && !m["LogRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["LogRecords"].type()) {
        vector<DescribeRunningLogRecordsResponseBodyItemsLogRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRunningLogRecordsResponseBodyItemsLogRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logRecords = make_shared<vector<DescribeRunningLogRecordsResponseBodyItemsLogRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeRunningLogRecordsResponseBodyItems() = default;
};
class DescribeRunningLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<DescribeRunningLogRecordsResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeRunningLogRecordsResponseBody() {}

  explicit DescribeRunningLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeRunningLogRecordsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeRunningLogRecordsResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeRunningLogRecordsResponseBody() = default;
};
class DescribeRunningLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRunningLogRecordsResponseBody> body{};

  DescribeRunningLogRecordsResponse() {}

  explicit DescribeRunningLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRunningLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRunningLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRunningLogRecordsResponse() = default;
};
class DescribeSecurityGroupConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeSecurityGroupConfigurationRequest() {}

  explicit DescribeSecurityGroupConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeSecurityGroupConfigurationRequest() = default;
};
class DescribeSecurityGroupConfigurationResponseBodyItemsRdsEcsSecurityGroupRel : public Darabonba::Model {
public:
  shared_ptr<string> netType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroupId{};

  DescribeSecurityGroupConfigurationResponseBodyItemsRdsEcsSecurityGroupRel() {}

  explicit DescribeSecurityGroupConfigurationResponseBodyItemsRdsEcsSecurityGroupRel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~DescribeSecurityGroupConfigurationResponseBodyItemsRdsEcsSecurityGroupRel() = default;
};
class DescribeSecurityGroupConfigurationResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSecurityGroupConfigurationResponseBodyItemsRdsEcsSecurityGroupRel>> rdsEcsSecurityGroupRel{};

  DescribeSecurityGroupConfigurationResponseBodyItems() {}

  explicit DescribeSecurityGroupConfigurationResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rdsEcsSecurityGroupRel) {
      vector<boost::any> temp1;
      for(auto item1:*rdsEcsSecurityGroupRel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RdsEcsSecurityGroupRel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RdsEcsSecurityGroupRel") != m.end() && !m["RdsEcsSecurityGroupRel"].empty()) {
      if (typeid(vector<boost::any>) == m["RdsEcsSecurityGroupRel"].type()) {
        vector<DescribeSecurityGroupConfigurationResponseBodyItemsRdsEcsSecurityGroupRel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RdsEcsSecurityGroupRel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecurityGroupConfigurationResponseBodyItemsRdsEcsSecurityGroupRel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rdsEcsSecurityGroupRel = make_shared<vector<DescribeSecurityGroupConfigurationResponseBodyItemsRdsEcsSecurityGroupRel>>(expect1);
      }
    }
  }


  virtual ~DescribeSecurityGroupConfigurationResponseBodyItems() = default;
};
class DescribeSecurityGroupConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSecurityGroupConfigurationResponseBodyItems> items{};
  shared_ptr<string> requestId{};

  DescribeSecurityGroupConfigurationResponseBody() {}

  explicit DescribeSecurityGroupConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSecurityGroupConfigurationResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSecurityGroupConfigurationResponseBodyItems>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSecurityGroupConfigurationResponseBody() = default;
};
class DescribeSecurityGroupConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSecurityGroupConfigurationResponseBody> body{};

  DescribeSecurityGroupConfigurationResponse() {}

  explicit DescribeSecurityGroupConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSecurityGroupConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecurityGroupConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecurityGroupConfigurationResponse() = default;
};
class DescribeSecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeSecurityIpsRequest() {}

  explicit DescribeSecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeSecurityIpsRequest() = default;
};
class DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup : public Darabonba::Model {
public:
  shared_ptr<string> securityIpGroupAttribute{};
  shared_ptr<string> securityIpGroupName{};
  shared_ptr<string> securityIpList{};

  DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup() {}

  explicit DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityIpGroupAttribute) {
      res["SecurityIpGroupAttribute"] = boost::any(*securityIpGroupAttribute);
    }
    if (securityIpGroupName) {
      res["SecurityIpGroupName"] = boost::any(*securityIpGroupName);
    }
    if (securityIpList) {
      res["SecurityIpList"] = boost::any(*securityIpList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityIpGroupAttribute") != m.end() && !m["SecurityIpGroupAttribute"].empty()) {
      securityIpGroupAttribute = make_shared<string>(boost::any_cast<string>(m["SecurityIpGroupAttribute"]));
    }
    if (m.find("SecurityIpGroupName") != m.end() && !m["SecurityIpGroupName"].empty()) {
      securityIpGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityIpGroupName"]));
    }
    if (m.find("SecurityIpList") != m.end() && !m["SecurityIpList"].empty()) {
      securityIpList = make_shared<string>(boost::any_cast<string>(m["SecurityIpList"]));
    }
  }


  virtual ~DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup() = default;
};
class DescribeSecurityIpsResponseBodySecurityIpGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup>> securityIpGroup{};

  DescribeSecurityIpsResponseBodySecurityIpGroups() {}

  explicit DescribeSecurityIpsResponseBodySecurityIpGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityIpGroup) {
      vector<boost::any> temp1;
      for(auto item1:*securityIpGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityIpGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityIpGroup") != m.end() && !m["SecurityIpGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityIpGroup"].type()) {
        vector<DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityIpGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityIpGroup = make_shared<vector<DescribeSecurityIpsResponseBodySecurityIpGroupsSecurityIpGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeSecurityIpsResponseBodySecurityIpGroups() = default;
};
class DescribeSecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSecurityIpsResponseBodySecurityIpGroups> securityIpGroups{};
  shared_ptr<string> securityIps{};

  DescribeSecurityIpsResponseBody() {}

  explicit DescribeSecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityIpGroups) {
      res["SecurityIpGroups"] = securityIpGroups ? boost::any(securityIpGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityIpGroups") != m.end() && !m["SecurityIpGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityIpGroups"].type()) {
        DescribeSecurityIpsResponseBodySecurityIpGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityIpGroups"]));
        securityIpGroups = make_shared<DescribeSecurityIpsResponseBodySecurityIpGroups>(model1);
      }
    }
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
  }


  virtual ~DescribeSecurityIpsResponseBody() = default;
};
class DescribeSecurityIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSecurityIpsResponseBody> body{};

  DescribeSecurityIpsResponse() {}

  explicit DescribeSecurityIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSecurityIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecurityIpsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecurityIpsResponse() = default;
};
class DescribeShardingNetworkAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DescribeShardingNetworkAddressRequest() {}

  explicit DescribeShardingNetworkAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeShardingNetworkAddressRequest() = default;
};
class DescribeShardingNetworkAddressResponseBodyCompatibleConnectionsCompatibleConnection : public Darabonba::Model {
public:
  shared_ptr<string> expiredTime{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> networkAddress{};
  shared_ptr<string> networkType{};
  shared_ptr<string> port{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vswitchId{};

  DescribeShardingNetworkAddressResponseBodyCompatibleConnectionsCompatibleConnection() {}

  explicit DescribeShardingNetworkAddressResponseBodyCompatibleConnectionsCompatibleConnection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (networkAddress) {
      res["NetworkAddress"] = boost::any(*networkAddress);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("NetworkAddress") != m.end() && !m["NetworkAddress"].empty()) {
      networkAddress = make_shared<string>(boost::any_cast<string>(m["NetworkAddress"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~DescribeShardingNetworkAddressResponseBodyCompatibleConnectionsCompatibleConnection() = default;
};
class DescribeShardingNetworkAddressResponseBodyCompatibleConnections : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeShardingNetworkAddressResponseBodyCompatibleConnectionsCompatibleConnection>> compatibleConnection{};

  DescribeShardingNetworkAddressResponseBodyCompatibleConnections() {}

  explicit DescribeShardingNetworkAddressResponseBodyCompatibleConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compatibleConnection) {
      vector<boost::any> temp1;
      for(auto item1:*compatibleConnection){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CompatibleConnection"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompatibleConnection") != m.end() && !m["CompatibleConnection"].empty()) {
      if (typeid(vector<boost::any>) == m["CompatibleConnection"].type()) {
        vector<DescribeShardingNetworkAddressResponseBodyCompatibleConnectionsCompatibleConnection> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CompatibleConnection"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeShardingNetworkAddressResponseBodyCompatibleConnectionsCompatibleConnection model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        compatibleConnection = make_shared<vector<DescribeShardingNetworkAddressResponseBodyCompatibleConnectionsCompatibleConnection>>(expect1);
      }
    }
  }


  virtual ~DescribeShardingNetworkAddressResponseBodyCompatibleConnections() = default;
};
class DescribeShardingNetworkAddressResponseBodyNetworkAddressesNetworkAddress : public Darabonba::Model {
public:
  shared_ptr<string> expiredTime{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> networkAddress{};
  shared_ptr<string> networkType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> port{};
  shared_ptr<string> role{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vswitchId{};

  DescribeShardingNetworkAddressResponseBodyNetworkAddressesNetworkAddress() {}

  explicit DescribeShardingNetworkAddressResponseBodyNetworkAddressesNetworkAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (networkAddress) {
      res["NetworkAddress"] = boost::any(*networkAddress);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("NetworkAddress") != m.end() && !m["NetworkAddress"].empty()) {
      networkAddress = make_shared<string>(boost::any_cast<string>(m["NetworkAddress"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~DescribeShardingNetworkAddressResponseBodyNetworkAddressesNetworkAddress() = default;
};
class DescribeShardingNetworkAddressResponseBodyNetworkAddresses : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeShardingNetworkAddressResponseBodyNetworkAddressesNetworkAddress>> networkAddress{};

  DescribeShardingNetworkAddressResponseBodyNetworkAddresses() {}

  explicit DescribeShardingNetworkAddressResponseBodyNetworkAddresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (networkAddress) {
      vector<boost::any> temp1;
      for(auto item1:*networkAddress){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetworkAddress"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetworkAddress") != m.end() && !m["NetworkAddress"].empty()) {
      if (typeid(vector<boost::any>) == m["NetworkAddress"].type()) {
        vector<DescribeShardingNetworkAddressResponseBodyNetworkAddressesNetworkAddress> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetworkAddress"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeShardingNetworkAddressResponseBodyNetworkAddressesNetworkAddress model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkAddress = make_shared<vector<DescribeShardingNetworkAddressResponseBodyNetworkAddressesNetworkAddress>>(expect1);
      }
    }
  }


  virtual ~DescribeShardingNetworkAddressResponseBodyNetworkAddresses() = default;
};
class DescribeShardingNetworkAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeShardingNetworkAddressResponseBodyCompatibleConnections> compatibleConnections{};
  shared_ptr<DescribeShardingNetworkAddressResponseBodyNetworkAddresses> networkAddresses{};
  shared_ptr<string> requestId{};

  DescribeShardingNetworkAddressResponseBody() {}

  explicit DescribeShardingNetworkAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compatibleConnections) {
      res["CompatibleConnections"] = compatibleConnections ? boost::any(compatibleConnections->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkAddresses) {
      res["NetworkAddresses"] = networkAddresses ? boost::any(networkAddresses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompatibleConnections") != m.end() && !m["CompatibleConnections"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompatibleConnections"].type()) {
        DescribeShardingNetworkAddressResponseBodyCompatibleConnections model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompatibleConnections"]));
        compatibleConnections = make_shared<DescribeShardingNetworkAddressResponseBodyCompatibleConnections>(model1);
      }
    }
    if (m.find("NetworkAddresses") != m.end() && !m["NetworkAddresses"].empty()) {
      if (typeid(map<string, boost::any>) == m["NetworkAddresses"].type()) {
        DescribeShardingNetworkAddressResponseBodyNetworkAddresses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NetworkAddresses"]));
        networkAddresses = make_shared<DescribeShardingNetworkAddressResponseBodyNetworkAddresses>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeShardingNetworkAddressResponseBody() = default;
};
class DescribeShardingNetworkAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeShardingNetworkAddressResponseBody> body{};

  DescribeShardingNetworkAddressResponse() {}

  explicit DescribeShardingNetworkAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeShardingNetworkAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeShardingNetworkAddressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeShardingNetworkAddressResponse() = default;
};
class DescribeSlowLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> orderType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> startTime{};

  DescribeSlowLogRecordsRequest() {}

  explicit DescribeSlowLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeSlowLogRecordsRequest() = default;
};
class DescribeSlowLogRecordsResponseBodyItemsLogRecords : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> DBName{};
  shared_ptr<long> docsExamined{};
  shared_ptr<string> executionStartTime{};
  shared_ptr<string> hostAddress{};
  shared_ptr<long> keysExamined{};
  shared_ptr<string> queryTimes{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<string> SQLText{};
  shared_ptr<string> tableName{};

  DescribeSlowLogRecordsResponseBodyItemsLogRecords() {}

  explicit DescribeSlowLogRecordsResponseBodyItemsLogRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (docsExamined) {
      res["DocsExamined"] = boost::any(*docsExamined);
    }
    if (executionStartTime) {
      res["ExecutionStartTime"] = boost::any(*executionStartTime);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (keysExamined) {
      res["KeysExamined"] = boost::any(*keysExamined);
    }
    if (queryTimes) {
      res["QueryTimes"] = boost::any(*queryTimes);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("DocsExamined") != m.end() && !m["DocsExamined"].empty()) {
      docsExamined = make_shared<long>(boost::any_cast<long>(m["DocsExamined"]));
    }
    if (m.find("ExecutionStartTime") != m.end() && !m["ExecutionStartTime"].empty()) {
      executionStartTime = make_shared<string>(boost::any_cast<string>(m["ExecutionStartTime"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("KeysExamined") != m.end() && !m["KeysExamined"].empty()) {
      keysExamined = make_shared<long>(boost::any_cast<long>(m["KeysExamined"]));
    }
    if (m.find("QueryTimes") != m.end() && !m["QueryTimes"].empty()) {
      queryTimes = make_shared<string>(boost::any_cast<string>(m["QueryTimes"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItemsLogRecords() = default;
};
class DescribeSlowLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogRecordsResponseBodyItemsLogRecords>> logRecords{};

  DescribeSlowLogRecordsResponseBodyItems() {}

  explicit DescribeSlowLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logRecords) {
      vector<boost::any> temp1;
      for(auto item1:*logRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogRecords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogRecords") != m.end() && !m["LogRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["LogRecords"].type()) {
        vector<DescribeSlowLogRecordsResponseBodyItemsLogRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogRecordsResponseBodyItemsLogRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logRecords = make_shared<vector<DescribeSlowLogRecordsResponseBodyItemsLogRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItems() = default;
};
class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> engine{};
  shared_ptr<DescribeSlowLogRecordsResponseBodyItems> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeSlowLogRecordsResponseBody() {}

  explicit DescribeSlowLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSlowLogRecordsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSlowLogRecordsResponseBodyItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBody() = default;
};
class DescribeSlowLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSlowLogRecordsResponseBody> body{};

  DescribeSlowLogRecordsResponse() {}

  explicit DescribeSlowLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSlowLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponse() = default;
};
class DescribeTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};

  DescribeTagsRequest() {}

  explicit DescribeTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DescribeTagsRequest() = default;
};
class DescribeTagsResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<vector<string>> tagValues{};

  DescribeTagsResponseBodyTags() {}

  explicit DescribeTagsResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValues) {
      res["TagValues"] = boost::any(*tagValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValues") != m.end() && !m["TagValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeTagsResponseBodyTags() = default;
};
class DescribeTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeTagsResponseBodyTags>> tags{};

  DescribeTagsResponseBody() {}

  explicit DescribeTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeTagsResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTagsResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeTagsResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~DescribeTagsResponseBody() = default;
};
class DescribeTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTagsResponseBody> body{};

  DescribeTagsResponse() {}

  explicit DescribeTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTagsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTagsResponse() = default;
};
class DescribeUserEncryptionKeyListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> targetRegionId{};

  DescribeUserEncryptionKeyListRequest() {}

  explicit DescribeUserEncryptionKeyListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (targetRegionId) {
      res["TargetRegionId"] = boost::any(*targetRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("TargetRegionId") != m.end() && !m["TargetRegionId"].empty()) {
      targetRegionId = make_shared<string>(boost::any_cast<string>(m["TargetRegionId"]));
    }
  }


  virtual ~DescribeUserEncryptionKeyListRequest() = default;
};
class DescribeUserEncryptionKeyListResponseBodyKeyIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keyId{};

  DescribeUserEncryptionKeyListResponseBodyKeyIds() {}

  explicit DescribeUserEncryptionKeyListResponseBodyKeyIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeyId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeyId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponseBodyKeyIds() = default;
};
class DescribeUserEncryptionKeyListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeUserEncryptionKeyListResponseBodyKeyIds> keyIds{};
  shared_ptr<string> requestId{};

  DescribeUserEncryptionKeyListResponseBody() {}

  explicit DescribeUserEncryptionKeyListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyIds) {
      res["KeyIds"] = keyIds ? boost::any(keyIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyIds") != m.end() && !m["KeyIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyIds"].type()) {
        DescribeUserEncryptionKeyListResponseBodyKeyIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyIds"]));
        keyIds = make_shared<DescribeUserEncryptionKeyListResponseBodyKeyIds>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponseBody() = default;
};
class DescribeUserEncryptionKeyListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserEncryptionKeyListResponseBody> body{};

  DescribeUserEncryptionKeyListResponse() {}

  explicit DescribeUserEncryptionKeyListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUserEncryptionKeyListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserEncryptionKeyListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponse() = default;
};
class DestroyInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  DestroyInstanceRequest() {}

  explicit DestroyInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DestroyInstanceRequest() = default;
};
class DestroyInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DestroyInstanceResponseBody() {}

  explicit DestroyInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DestroyInstanceResponseBody() = default;
};
class DestroyInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DestroyInstanceResponseBody> body{};

  DestroyInstanceResponse() {}

  explicit DestroyInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DestroyInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DestroyInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DestroyInstanceResponse() = default;
};
class EvaluateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> readonlyReplicas{};
  shared_ptr<string> regionId{};
  shared_ptr<string> replicationFactor{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> shardsInfo{};
  shared_ptr<string> zoneId{};

  EvaluateResourceRequest() {}

  explicit EvaluateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (readonlyReplicas) {
      res["ReadonlyReplicas"] = boost::any(*readonlyReplicas);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (replicationFactor) {
      res["ReplicationFactor"] = boost::any(*replicationFactor);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (shardsInfo) {
      res["ShardsInfo"] = boost::any(*shardsInfo);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReadonlyReplicas") != m.end() && !m["ReadonlyReplicas"].empty()) {
      readonlyReplicas = make_shared<string>(boost::any_cast<string>(m["ReadonlyReplicas"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReplicationFactor") != m.end() && !m["ReplicationFactor"].empty()) {
      replicationFactor = make_shared<string>(boost::any_cast<string>(m["ReplicationFactor"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ShardsInfo") != m.end() && !m["ShardsInfo"].empty()) {
      shardsInfo = make_shared<string>(boost::any_cast<string>(m["ShardsInfo"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~EvaluateResourceRequest() = default;
};
class EvaluateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceAvailable{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> requestId{};

  EvaluateResourceResponseBody() {}

  explicit EvaluateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceAvailable) {
      res["DBInstanceAvailable"] = boost::any(*DBInstanceAvailable);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceAvailable") != m.end() && !m["DBInstanceAvailable"].empty()) {
      DBInstanceAvailable = make_shared<string>(boost::any_cast<string>(m["DBInstanceAvailable"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EvaluateResourceResponseBody() = default;
};
class EvaluateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EvaluateResourceResponseBody> body{};

  EvaluateResourceResponse() {}

  explicit EvaluateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EvaluateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EvaluateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~EvaluateResourceResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class MigrateAvailableZoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> vswitch{};
  shared_ptr<string> zoneId{};

  MigrateAvailableZoneRequest() {}

  explicit MigrateAvailableZoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (vswitch) {
      res["Vswitch"] = boost::any(*vswitch);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Vswitch") != m.end() && !m["Vswitch"].empty()) {
      vswitch = make_shared<string>(boost::any_cast<string>(m["Vswitch"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~MigrateAvailableZoneRequest() = default;
};
class MigrateAvailableZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MigrateAvailableZoneResponseBody() {}

  explicit MigrateAvailableZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~MigrateAvailableZoneResponseBody() = default;
};
class MigrateAvailableZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MigrateAvailableZoneResponseBody> body{};

  MigrateAvailableZoneResponse() {}

  explicit MigrateAvailableZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MigrateAvailableZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MigrateAvailableZoneResponseBody>(model1);
      }
    }
  }


  virtual ~MigrateAvailableZoneResponse() = default;
};
class MigrateToOtherZoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  MigrateToOtherZoneRequest() {}

  explicit MigrateToOtherZoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~MigrateToOtherZoneRequest() = default;
};
class MigrateToOtherZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MigrateToOtherZoneResponseBody() {}

  explicit MigrateToOtherZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~MigrateToOtherZoneResponseBody() = default;
};
class MigrateToOtherZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MigrateToOtherZoneResponseBody> body{};

  MigrateToOtherZoneResponse() {}

  explicit MigrateToOtherZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MigrateToOtherZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MigrateToOtherZoneResponseBody>(model1);
      }
    }
  }


  virtual ~MigrateToOtherZoneResponse() = default;
};
class ModifyAccountDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountName{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyAccountDescriptionRequest() {}

  explicit ModifyAccountDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyAccountDescriptionRequest() = default;
};
class ModifyAccountDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountDescriptionResponseBody() {}

  explicit ModifyAccountDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAccountDescriptionResponseBody() = default;
};
class ModifyAccountDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAccountDescriptionResponseBody> body{};

  ModifyAccountDescriptionResponse() {}

  explicit ModifyAccountDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAccountDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountDescriptionResponse() = default;
};
class ModifyAuditLogFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> filter{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> roleType{};
  shared_ptr<string> securityToken{};

  ModifyAuditLogFilterRequest() {}

  explicit ModifyAuditLogFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyAuditLogFilterRequest() = default;
};
class ModifyAuditLogFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAuditLogFilterResponseBody() {}

  explicit ModifyAuditLogFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAuditLogFilterResponseBody() = default;
};
class ModifyAuditLogFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAuditLogFilterResponseBody> body{};

  ModifyAuditLogFilterResponse() {}

  explicit ModifyAuditLogFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAuditLogFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAuditLogFilterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAuditLogFilterResponse() = default;
};
class ModifyAuditPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditLogSwitchSource{};
  shared_ptr<string> auditStatus{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> serviceType{};
  shared_ptr<long> storagePeriod{};

  ModifyAuditPolicyRequest() {}

  explicit ModifyAuditPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditLogSwitchSource) {
      res["AuditLogSwitchSource"] = boost::any(*auditLogSwitchSource);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (storagePeriod) {
      res["StoragePeriod"] = boost::any(*storagePeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditLogSwitchSource") != m.end() && !m["AuditLogSwitchSource"].empty()) {
      auditLogSwitchSource = make_shared<string>(boost::any_cast<string>(m["AuditLogSwitchSource"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("StoragePeriod") != m.end() && !m["StoragePeriod"].empty()) {
      storagePeriod = make_shared<long>(boost::any_cast<long>(m["StoragePeriod"]));
    }
  }


  virtual ~ModifyAuditPolicyRequest() = default;
};
class ModifyAuditPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAuditPolicyResponseBody() {}

  explicit ModifyAuditPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAuditPolicyResponseBody() = default;
};
class ModifyAuditPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAuditPolicyResponseBody> body{};

  ModifyAuditPolicyResponse() {}

  explicit ModifyAuditPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAuditPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAuditPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAuditPolicyResponse() = default;
};
class ModifyBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> enableBackupLog{};
  shared_ptr<long> logBackupRetentionPeriod{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyBackupPolicyRequest() {}

  explicit ModifyBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    if (logBackupRetentionPeriod) {
      res["LogBackupRetentionPeriod"] = boost::any(*logBackupRetentionPeriod);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<long>(boost::any_cast<long>(m["EnableBackupLog"]));
    }
    if (m.find("LogBackupRetentionPeriod") != m.end() && !m["LogBackupRetentionPeriod"].empty()) {
      logBackupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["LogBackupRetentionPeriod"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyBackupPolicyRequest() = default;
};
class ModifyBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBackupPolicyResponseBody() {}

  explicit ModifyBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyBackupPolicyResponseBody() = default;
};
class ModifyBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyBackupPolicyResponseBody> body{};

  ModifyBackupPolicyResponse() {}

  explicit ModifyBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupPolicyResponse() = default;
};
class ModifyDBInstanceConnectionStringRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentConnectionString{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> newConnectionString{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyDBInstanceConnectionStringRequest() {}

  explicit ModifyDBInstanceConnectionStringRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (newConnectionString) {
      res["NewConnectionString"] = boost::any(*newConnectionString);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NewConnectionString") != m.end() && !m["NewConnectionString"].empty()) {
      newConnectionString = make_shared<string>(boost::any_cast<string>(m["NewConnectionString"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyDBInstanceConnectionStringRequest() = default;
};
class ModifyDBInstanceConnectionStringResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceConnectionStringResponseBody() {}

  explicit ModifyDBInstanceConnectionStringResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBInstanceConnectionStringResponseBody() = default;
};
class ModifyDBInstanceConnectionStringResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceConnectionStringResponseBody> body{};

  ModifyDBInstanceConnectionStringResponse() {}

  explicit ModifyDBInstanceConnectionStringResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceConnectionStringResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceConnectionStringResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceConnectionStringResponse() = default;
};
class ModifyDBInstanceDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyDBInstanceDescriptionRequest() {}

  explicit ModifyDBInstanceDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyDBInstanceDescriptionRequest() = default;
};
class ModifyDBInstanceDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceDescriptionResponseBody() {}

  explicit ModifyDBInstanceDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBInstanceDescriptionResponseBody() = default;
};
class ModifyDBInstanceDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceDescriptionResponseBody> body{};

  ModifyDBInstanceDescriptionResponse() {}

  explicit ModifyDBInstanceDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceDescriptionResponse() = default;
};
class ModifyDBInstanceMaintainTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyDBInstanceMaintainTimeRequest() {}

  explicit ModifyDBInstanceMaintainTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyDBInstanceMaintainTimeRequest() = default;
};
class ModifyDBInstanceMaintainTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceMaintainTimeResponseBody() {}

  explicit ModifyDBInstanceMaintainTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBInstanceMaintainTimeResponseBody() = default;
};
class ModifyDBInstanceMaintainTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceMaintainTimeResponseBody> body{};

  ModifyDBInstanceMaintainTimeResponse() {}

  explicit ModifyDBInstanceMaintainTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceMaintainTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceMaintainTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceMaintainTimeResponse() = default;
};
class ModifyDBInstanceMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> granularity{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyDBInstanceMonitorRequest() {}

  explicit ModifyDBInstanceMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyDBInstanceMonitorRequest() = default;
};
class ModifyDBInstanceMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceMonitorResponseBody() {}

  explicit ModifyDBInstanceMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBInstanceMonitorResponseBody() = default;
};
class ModifyDBInstanceMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceMonitorResponseBody> body{};

  ModifyDBInstanceMonitorResponse() {}

  explicit ModifyDBInstanceMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceMonitorResponse() = default;
};
class ModifyDBInstanceNetExpireTimeRequest : public Darabonba::Model {
public:
  shared_ptr<long> classicExpendExpiredDays{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyDBInstanceNetExpireTimeRequest() {}

  explicit ModifyDBInstanceNetExpireTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classicExpendExpiredDays) {
      res["ClassicExpendExpiredDays"] = boost::any(*classicExpendExpiredDays);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassicExpendExpiredDays") != m.end() && !m["ClassicExpendExpiredDays"].empty()) {
      classicExpendExpiredDays = make_shared<long>(boost::any_cast<long>(m["ClassicExpendExpiredDays"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyDBInstanceNetExpireTimeRequest() = default;
};
class ModifyDBInstanceNetExpireTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceNetExpireTimeResponseBody() {}

  explicit ModifyDBInstanceNetExpireTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBInstanceNetExpireTimeResponseBody() = default;
};
class ModifyDBInstanceNetExpireTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceNetExpireTimeResponseBody> body{};

  ModifyDBInstanceNetExpireTimeResponse() {}

  explicit ModifyDBInstanceNetExpireTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceNetExpireTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceNetExpireTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceNetExpireTimeResponse() = default;
};
class ModifyDBInstanceNetworkTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> classicExpiredDays{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> retainClassic{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  ModifyDBInstanceNetworkTypeRequest() {}

  explicit ModifyDBInstanceNetworkTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classicExpiredDays) {
      res["ClassicExpiredDays"] = boost::any(*classicExpiredDays);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (retainClassic) {
      res["RetainClassic"] = boost::any(*retainClassic);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassicExpiredDays") != m.end() && !m["ClassicExpiredDays"].empty()) {
      classicExpiredDays = make_shared<long>(boost::any_cast<long>(m["ClassicExpiredDays"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RetainClassic") != m.end() && !m["RetainClassic"].empty()) {
      retainClassic = make_shared<string>(boost::any_cast<string>(m["RetainClassic"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ModifyDBInstanceNetworkTypeRequest() = default;
};
class ModifyDBInstanceNetworkTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceNetworkTypeResponseBody() {}

  explicit ModifyDBInstanceNetworkTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBInstanceNetworkTypeResponseBody() = default;
};
class ModifyDBInstanceNetworkTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceNetworkTypeResponseBody> body{};

  ModifyDBInstanceNetworkTypeResponse() {}

  explicit ModifyDBInstanceNetworkTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceNetworkTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceNetworkTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceNetworkTypeResponse() = default;
};
class ModifyDBInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> disableTlsProtocol{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> SSLAction{};
  shared_ptr<string> securityToken{};

  ModifyDBInstanceSSLRequest() {}

  explicit ModifyDBInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (disableTlsProtocol) {
      res["DisableTlsProtocol"] = boost::any(*disableTlsProtocol);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (SSLAction) {
      res["SSLAction"] = boost::any(*SSLAction);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DisableTlsProtocol") != m.end() && !m["DisableTlsProtocol"].empty()) {
      disableTlsProtocol = make_shared<string>(boost::any_cast<string>(m["DisableTlsProtocol"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SSLAction") != m.end() && !m["SSLAction"].empty()) {
      SSLAction = make_shared<string>(boost::any_cast<string>(m["SSLAction"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyDBInstanceSSLRequest() = default;
};
class ModifyDBInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceSSLResponseBody() {}

  explicit ModifyDBInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBInstanceSSLResponseBody() = default;
};
class ModifyDBInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceSSLResponseBody> body{};

  ModifyDBInstanceSSLResponse() {}

  explicit ModifyDBInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceSSLResponse() = default;
};
class ModifyDBInstanceSpecRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceStorage{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> orderType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> readonlyReplicas{};
  shared_ptr<string> replicationFactor{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyDBInstanceSpecRequest() {}

  explicit ModifyDBInstanceSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceStorage) {
      res["DBInstanceStorage"] = boost::any(*DBInstanceStorage);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (readonlyReplicas) {
      res["ReadonlyReplicas"] = boost::any(*readonlyReplicas);
    }
    if (replicationFactor) {
      res["ReplicationFactor"] = boost::any(*replicationFactor);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceStorage") != m.end() && !m["DBInstanceStorage"].empty()) {
      DBInstanceStorage = make_shared<string>(boost::any_cast<string>(m["DBInstanceStorage"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReadonlyReplicas") != m.end() && !m["ReadonlyReplicas"].empty()) {
      readonlyReplicas = make_shared<string>(boost::any_cast<string>(m["ReadonlyReplicas"]));
    }
    if (m.find("ReplicationFactor") != m.end() && !m["ReplicationFactor"].empty()) {
      replicationFactor = make_shared<string>(boost::any_cast<string>(m["ReplicationFactor"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyDBInstanceSpecRequest() = default;
};
class ModifyDBInstanceSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyDBInstanceSpecResponseBody() {}

  explicit ModifyDBInstanceSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBInstanceSpecResponseBody() = default;
};
class ModifyDBInstanceSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceSpecResponseBody> body{};

  ModifyDBInstanceSpecResponse() {}

  explicit ModifyDBInstanceSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceSpecResponse() = default;
};
class ModifyDBInstanceTDERequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> encryptorName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> roleARN{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> TDEStatus{};

  ModifyDBInstanceTDERequest() {}

  explicit ModifyDBInstanceTDERequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (encryptorName) {
      res["EncryptorName"] = boost::any(*encryptorName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (roleARN) {
      res["RoleARN"] = boost::any(*roleARN);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (TDEStatus) {
      res["TDEStatus"] = boost::any(*TDEStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("EncryptorName") != m.end() && !m["EncryptorName"].empty()) {
      encryptorName = make_shared<string>(boost::any_cast<string>(m["EncryptorName"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RoleARN") != m.end() && !m["RoleARN"].empty()) {
      roleARN = make_shared<string>(boost::any_cast<string>(m["RoleARN"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("TDEStatus") != m.end() && !m["TDEStatus"].empty()) {
      TDEStatus = make_shared<string>(boost::any_cast<string>(m["TDEStatus"]));
    }
  }


  virtual ~ModifyDBInstanceTDERequest() = default;
};
class ModifyDBInstanceTDEResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceTDEResponseBody() {}

  explicit ModifyDBInstanceTDEResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBInstanceTDEResponseBody() = default;
};
class ModifyDBInstanceTDEResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceTDEResponseBody> body{};

  ModifyDBInstanceTDEResponse() {}

  explicit ModifyDBInstanceTDEResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceTDEResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceTDEResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceTDEResponse() = default;
};
class ModifyInstanceAutoRenewalAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> duration{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyInstanceAutoRenewalAttributeRequest() {}

  explicit ModifyInstanceAutoRenewalAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyInstanceAutoRenewalAttributeRequest() = default;
};
class ModifyInstanceAutoRenewalAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceAutoRenewalAttributeResponseBody() {}

  explicit ModifyInstanceAutoRenewalAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyInstanceAutoRenewalAttributeResponseBody() = default;
};
class ModifyInstanceAutoRenewalAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceAutoRenewalAttributeResponseBody> body{};

  ModifyInstanceAutoRenewalAttributeResponse() {}

  explicit ModifyInstanceAutoRenewalAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyInstanceAutoRenewalAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceAutoRenewalAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceAutoRenewalAttributeResponse() = default;
};
class ModifyInstanceVpcAuthModeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> vpcAuthMode{};

  ModifyInstanceVpcAuthModeRequest() {}

  explicit ModifyInstanceVpcAuthModeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (vpcAuthMode) {
      res["VpcAuthMode"] = boost::any(*vpcAuthMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("VpcAuthMode") != m.end() && !m["VpcAuthMode"].empty()) {
      vpcAuthMode = make_shared<string>(boost::any_cast<string>(m["VpcAuthMode"]));
    }
  }


  virtual ~ModifyInstanceVpcAuthModeRequest() = default;
};
class ModifyInstanceVpcAuthModeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceVpcAuthModeResponseBody() {}

  explicit ModifyInstanceVpcAuthModeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyInstanceVpcAuthModeResponseBody() = default;
};
class ModifyInstanceVpcAuthModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceVpcAuthModeResponseBody> body{};

  ModifyInstanceVpcAuthModeResponse() {}

  explicit ModifyInstanceVpcAuthModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyInstanceVpcAuthModeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceVpcAuthModeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceVpcAuthModeResponse() = default;
};
class ModifyNodeSpecRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> fromApp{};
  shared_ptr<string> nodeClass{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> nodeStorage{};
  shared_ptr<string> orderType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> readonlyReplicas{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> switchTime{};

  ModifyNodeSpecRequest() {}

  explicit ModifyNodeSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (fromApp) {
      res["FromApp"] = boost::any(*fromApp);
    }
    if (nodeClass) {
      res["NodeClass"] = boost::any(*nodeClass);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeStorage) {
      res["NodeStorage"] = boost::any(*nodeStorage);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (readonlyReplicas) {
      res["ReadonlyReplicas"] = boost::any(*readonlyReplicas);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("FromApp") != m.end() && !m["FromApp"].empty()) {
      fromApp = make_shared<string>(boost::any_cast<string>(m["FromApp"]));
    }
    if (m.find("NodeClass") != m.end() && !m["NodeClass"].empty()) {
      nodeClass = make_shared<string>(boost::any_cast<string>(m["NodeClass"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeStorage") != m.end() && !m["NodeStorage"].empty()) {
      nodeStorage = make_shared<long>(boost::any_cast<long>(m["NodeStorage"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ReadonlyReplicas") != m.end() && !m["ReadonlyReplicas"].empty()) {
      readonlyReplicas = make_shared<long>(boost::any_cast<long>(m["ReadonlyReplicas"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
  }


  virtual ~ModifyNodeSpecRequest() = default;
};
class ModifyNodeSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyNodeSpecResponseBody() {}

  explicit ModifyNodeSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyNodeSpecResponseBody() = default;
};
class ModifyNodeSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNodeSpecResponseBody> body{};

  ModifyNodeSpecResponse() {}

  explicit ModifyNodeSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyNodeSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNodeSpecResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNodeSpecResponse() = default;
};
class ModifyNodeSpecBatchRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> nodesInfo{};
  shared_ptr<string> orderType{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyNodeSpecBatchRequest() {}

  explicit ModifyNodeSpecBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (nodesInfo) {
      res["NodesInfo"] = boost::any(*nodesInfo);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("NodesInfo") != m.end() && !m["NodesInfo"].empty()) {
      nodesInfo = make_shared<string>(boost::any_cast<string>(m["NodesInfo"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyNodeSpecBatchRequest() = default;
};
class ModifyNodeSpecBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  ModifyNodeSpecBatchResponseBody() {}

  explicit ModifyNodeSpecBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyNodeSpecBatchResponseBody() = default;
};
class ModifyNodeSpecBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNodeSpecBatchResponseBody> body{};

  ModifyNodeSpecBatchResponse() {}

  explicit ModifyNodeSpecBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyNodeSpecBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNodeSpecBatchResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNodeSpecBatchResponse() = default;
};
class ModifyParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> characterType{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyParametersRequest() {}

  explicit ModifyParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (characterType) {
      res["CharacterType"] = boost::any(*characterType);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CharacterType") != m.end() && !m["CharacterType"].empty()) {
      characterType = make_shared<string>(boost::any_cast<string>(m["CharacterType"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyParametersRequest() = default;
};
class ModifyParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyParametersResponseBody() {}

  explicit ModifyParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyParametersResponseBody() = default;
};
class ModifyParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyParametersResponseBody> body{};

  ModifyParametersResponse() {}

  explicit ModifyParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyParametersResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyParametersResponse() = default;
};
class ModifyResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ModifyResourceGroupRequest() {}

  explicit ModifyResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyResourceGroupRequest() = default;
};
class ModifyResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyResourceGroupResponseBody() {}

  explicit ModifyResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyResourceGroupResponseBody() = default;
};
class ModifyResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyResourceGroupResponseBody> body{};

  ModifyResourceGroupResponse() {}

  explicit ModifyResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyResourceGroupResponse() = default;
};
class ModifySecurityGroupConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> securityToken{};

  ModifySecurityGroupConfigurationRequest() {}

  explicit ModifySecurityGroupConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifySecurityGroupConfigurationRequest() = default;
};
class ModifySecurityGroupConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySecurityGroupConfigurationResponseBody() {}

  explicit ModifySecurityGroupConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifySecurityGroupConfigurationResponseBody() = default;
};
class ModifySecurityGroupConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySecurityGroupConfigurationResponseBody> body{};

  ModifySecurityGroupConfigurationResponse() {}

  explicit ModifySecurityGroupConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifySecurityGroupConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecurityGroupConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecurityGroupConfigurationResponse() = default;
};
class ModifySecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> modifyMode{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityIpGroupAttribute{};
  shared_ptr<string> securityIpGroupName{};
  shared_ptr<string> securityIps{};
  shared_ptr<string> securityToken{};

  ModifySecurityIpsRequest() {}

  explicit ModifySecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityIpGroupAttribute) {
      res["SecurityIpGroupAttribute"] = boost::any(*securityIpGroupAttribute);
    }
    if (securityIpGroupName) {
      res["SecurityIpGroupName"] = boost::any(*securityIpGroupName);
    }
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityIpGroupAttribute") != m.end() && !m["SecurityIpGroupAttribute"].empty()) {
      securityIpGroupAttribute = make_shared<string>(boost::any_cast<string>(m["SecurityIpGroupAttribute"]));
    }
    if (m.find("SecurityIpGroupName") != m.end() && !m["SecurityIpGroupName"].empty()) {
      securityIpGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityIpGroupName"]));
    }
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifySecurityIpsRequest() = default;
};
class ModifySecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySecurityIpsResponseBody() {}

  explicit ModifySecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifySecurityIpsResponseBody() = default;
};
class ModifySecurityIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySecurityIpsResponseBody> body{};

  ModifySecurityIpsResponse() {}

  explicit ModifySecurityIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifySecurityIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecurityIpsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecurityIpsResponse() = default;
};
class ReleaseNodePrivateNetworkAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> networkType{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ReleaseNodePrivateNetworkAddressRequest() {}

  explicit ReleaseNodePrivateNetworkAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ReleaseNodePrivateNetworkAddressRequest() = default;
};
class ReleaseNodePrivateNetworkAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseNodePrivateNetworkAddressResponseBody() {}

  explicit ReleaseNodePrivateNetworkAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReleaseNodePrivateNetworkAddressResponseBody() = default;
};
class ReleaseNodePrivateNetworkAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseNodePrivateNetworkAddressResponseBody> body{};

  ReleaseNodePrivateNetworkAddressResponse() {}

  explicit ReleaseNodePrivateNetworkAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleaseNodePrivateNetworkAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseNodePrivateNetworkAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseNodePrivateNetworkAddressResponse() = default;
};
class ReleasePublicNetworkAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ReleasePublicNetworkAddressRequest() {}

  explicit ReleasePublicNetworkAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ReleasePublicNetworkAddressRequest() = default;
};
class ReleasePublicNetworkAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleasePublicNetworkAddressResponseBody() {}

  explicit ReleasePublicNetworkAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReleasePublicNetworkAddressResponseBody() = default;
};
class ReleasePublicNetworkAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleasePublicNetworkAddressResponseBody> body{};

  ReleasePublicNetworkAddressResponse() {}

  explicit ReleasePublicNetworkAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleasePublicNetworkAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleasePublicNetworkAddressResponseBody>(model1);
      }
    }
  }


  virtual ~ReleasePublicNetworkAddressResponse() = default;
};
class RenewDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> period{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  RenewDBInstanceRequest() {}

  explicit RenewDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~RenewDBInstanceRequest() = default;
};
class RenewDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  RenewDBInstanceResponseBody() {}

  explicit RenewDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenewDBInstanceResponseBody() = default;
};
class RenewDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewDBInstanceResponseBody> body{};

  RenewDBInstanceResponse() {}

  explicit RenewDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RenewDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewDBInstanceResponse() = default;
};
class ResetAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  ResetAccountPasswordRequest() {}

  explicit ResetAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ResetAccountPasswordRequest() = default;
};
class ResetAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetAccountPasswordResponseBody() {}

  explicit ResetAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetAccountPasswordResponseBody() = default;
};
class ResetAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAccountPasswordResponseBody> body{};

  ResetAccountPasswordResponse() {}

  explicit ResetAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetAccountPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAccountPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAccountPasswordResponse() = default;
};
class RestartDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  RestartDBInstanceRequest() {}

  explicit RestartDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~RestartDBInstanceRequest() = default;
};
class RestartDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartDBInstanceResponseBody() {}

  explicit RestartDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RestartDBInstanceResponseBody() = default;
};
class RestartDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartDBInstanceResponseBody> body{};

  RestartDBInstanceResponse() {}

  explicit RestartDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartDBInstanceResponse() = default;
};
class RestoreDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> backupId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  RestoreDBInstanceRequest() {}

  explicit RestoreDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<long>(boost::any_cast<long>(m["BackupId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~RestoreDBInstanceRequest() = default;
};
class RestoreDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestoreDBInstanceResponseBody() {}

  explicit RestoreDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RestoreDBInstanceResponseBody() = default;
};
class RestoreDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestoreDBInstanceResponseBody> body{};

  RestoreDBInstanceResponse() {}

  explicit RestoreDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestoreDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestoreDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestoreDBInstanceResponse() = default;
};
class SwitchDBInstanceHARequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> roleIds{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> switchMode{};

  SwitchDBInstanceHARequest() {}

  explicit SwitchDBInstanceHARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (roleIds) {
      res["RoleIds"] = boost::any(*roleIds);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (switchMode) {
      res["SwitchMode"] = boost::any(*switchMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RoleIds") != m.end() && !m["RoleIds"].empty()) {
      roleIds = make_shared<string>(boost::any_cast<string>(m["RoleIds"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SwitchMode") != m.end() && !m["SwitchMode"].empty()) {
      switchMode = make_shared<long>(boost::any_cast<long>(m["SwitchMode"]));
    }
  }


  virtual ~SwitchDBInstanceHARequest() = default;
};
class SwitchDBInstanceHAResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchDBInstanceHAResponseBody() {}

  explicit SwitchDBInstanceHAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SwitchDBInstanceHAResponseBody() = default;
};
class SwitchDBInstanceHAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchDBInstanceHAResponseBody> body{};

  SwitchDBInstanceHAResponse() {}

  explicit SwitchDBInstanceHAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SwitchDBInstanceHAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchDBInstanceHAResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchDBInstanceHAResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class TransformToPrePaidRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> autoRenew{};
  shared_ptr<string> businessInfo{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> period{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  TransformToPrePaidRequest() {}

  explicit TransformToPrePaidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (businessInfo) {
      res["BusinessInfo"] = boost::any(*businessInfo);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("BusinessInfo") != m.end() && !m["BusinessInfo"].empty()) {
      businessInfo = make_shared<string>(boost::any_cast<string>(m["BusinessInfo"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~TransformToPrePaidRequest() = default;
};
class TransformToPrePaidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  TransformToPrePaidResponseBody() {}

  explicit TransformToPrePaidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TransformToPrePaidResponseBody() = default;
};
class TransformToPrePaidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransformToPrePaidResponseBody> body{};

  TransformToPrePaidResponse() {}

  explicit TransformToPrePaidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransformToPrePaidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransformToPrePaidResponseBody>(model1);
      }
    }
  }


  virtual ~TransformToPrePaidResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpgradeDBInstanceEngineVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  UpgradeDBInstanceEngineVersionRequest() {}

  explicit UpgradeDBInstanceEngineVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~UpgradeDBInstanceEngineVersionRequest() = default;
};
class UpgradeDBInstanceEngineVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeDBInstanceEngineVersionResponseBody() {}

  explicit UpgradeDBInstanceEngineVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeDBInstanceEngineVersionResponseBody() = default;
};
class UpgradeDBInstanceEngineVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeDBInstanceEngineVersionResponseBody> body{};

  UpgradeDBInstanceEngineVersionResponse() {}

  explicit UpgradeDBInstanceEngineVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeDBInstanceEngineVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBInstanceEngineVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBInstanceEngineVersionResponse() = default;
};
class UpgradeDBInstanceKernelVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityToken{};

  UpgradeDBInstanceKernelVersionRequest() {}

  explicit UpgradeDBInstanceKernelVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~UpgradeDBInstanceKernelVersionRequest() = default;
};
class UpgradeDBInstanceKernelVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeDBInstanceKernelVersionResponseBody() {}

  explicit UpgradeDBInstanceKernelVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeDBInstanceKernelVersionResponseBody() = default;
};
class UpgradeDBInstanceKernelVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeDBInstanceKernelVersionResponseBody> body{};

  UpgradeDBInstanceKernelVersionResponse() {}

  explicit UpgradeDBInstanceKernelVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeDBInstanceKernelVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBInstanceKernelVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBInstanceKernelVersionResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AllocateNodePrivateNetworkAddressResponse allocateNodePrivateNetworkAddressWithOptions(shared_ptr<AllocateNodePrivateNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateNodePrivateNetworkAddressResponse allocateNodePrivateNetworkAddress(shared_ptr<AllocateNodePrivateNetworkAddressRequest> request);
  AllocatePublicNetworkAddressResponse allocatePublicNetworkAddressWithOptions(shared_ptr<AllocatePublicNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocatePublicNetworkAddressResponse allocatePublicNetworkAddress(shared_ptr<AllocatePublicNetworkAddressRequest> request);
  CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorizedWithOptions(shared_ptr<CheckCloudResourceAuthorizedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckCloudResourceAuthorizedResponse checkCloudResourceAuthorized(shared_ptr<CheckCloudResourceAuthorizedRequest> request);
  CheckRecoveryConditionResponse checkRecoveryConditionWithOptions(shared_ptr<CheckRecoveryConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckRecoveryConditionResponse checkRecoveryCondition(shared_ptr<CheckRecoveryConditionRequest> request);
  CreateBackupResponse createBackupWithOptions(shared_ptr<CreateBackupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBackupResponse createBackup(shared_ptr<CreateBackupRequest> request);
  CreateDBInstanceResponse createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBInstanceResponse createDBInstance(shared_ptr<CreateDBInstanceRequest> request);
  CreateNodeResponse createNodeWithOptions(shared_ptr<CreateNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNodeResponse createNode(shared_ptr<CreateNodeRequest> request);
  CreateNodeBatchResponse createNodeBatchWithOptions(shared_ptr<CreateNodeBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNodeBatchResponse createNodeBatch(shared_ptr<CreateNodeBatchRequest> request);
  CreateShardingDBInstanceResponse createShardingDBInstanceWithOptions(shared_ptr<CreateShardingDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateShardingDBInstanceResponse createShardingDBInstance(shared_ptr<CreateShardingDBInstanceRequest> request);
  DeleteDBInstanceResponse deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBInstanceResponse deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request);
  DeleteNodeResponse deleteNodeWithOptions(shared_ptr<DeleteNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNodeResponse deleteNode(shared_ptr<DeleteNodeRequest> request);
  DescribeAccountsResponse describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountsResponse describeAccounts(shared_ptr<DescribeAccountsRequest> request);
  DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCountWithOptions(shared_ptr<DescribeActiveOperationTaskCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeActiveOperationTaskCountResponse describeActiveOperationTaskCount(shared_ptr<DescribeActiveOperationTaskCountRequest> request);
  DescribeActiveOperationTaskTypeResponse describeActiveOperationTaskTypeWithOptions(shared_ptr<DescribeActiveOperationTaskTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeActiveOperationTaskTypeResponse describeActiveOperationTaskType(shared_ptr<DescribeActiveOperationTaskTypeRequest> request);
  DescribeAuditLogFilterResponse describeAuditLogFilterWithOptions(shared_ptr<DescribeAuditLogFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditLogFilterResponse describeAuditLogFilter(shared_ptr<DescribeAuditLogFilterRequest> request);
  DescribeAuditPolicyResponse describeAuditPolicyWithOptions(shared_ptr<DescribeAuditPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditPolicyResponse describeAuditPolicy(shared_ptr<DescribeAuditPolicyRequest> request);
  DescribeAuditRecordsResponse describeAuditRecordsWithOptions(shared_ptr<DescribeAuditRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditRecordsResponse describeAuditRecords(shared_ptr<DescribeAuditRecordsRequest> request);
  DescribeAvailableEngineVersionResponse describeAvailableEngineVersionWithOptions(shared_ptr<DescribeAvailableEngineVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableEngineVersionResponse describeAvailableEngineVersion(shared_ptr<DescribeAvailableEngineVersionRequest> request);
  DescribeAvailableResourceResponse describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableResourceResponse describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request);
  DescribeBackupDBsResponse describeBackupDBsWithOptions(shared_ptr<DescribeBackupDBsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupDBsResponse describeBackupDBs(shared_ptr<DescribeBackupDBsRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupsResponse describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupsResponse describeBackups(shared_ptr<DescribeBackupsRequest> request);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request);
  DescribeDBInstanceEncryptionKeyResponse describeDBInstanceEncryptionKeyWithOptions(shared_ptr<DescribeDBInstanceEncryptionKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceEncryptionKeyResponse describeDBInstanceEncryptionKey(shared_ptr<DescribeDBInstanceEncryptionKeyRequest> request);
  DescribeDBInstanceMonitorResponse describeDBInstanceMonitorWithOptions(shared_ptr<DescribeDBInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceMonitorResponse describeDBInstanceMonitor(shared_ptr<DescribeDBInstanceMonitorRequest> request);
  DescribeDBInstancePerformanceResponse describeDBInstancePerformanceWithOptions(shared_ptr<DescribeDBInstancePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancePerformanceResponse describeDBInstancePerformance(shared_ptr<DescribeDBInstancePerformanceRequest> request);
  DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(shared_ptr<DescribeDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceSSLResponse describeDBInstanceSSL(shared_ptr<DescribeDBInstanceSSLRequest> request);
  DescribeDBInstanceTDEInfoResponse describeDBInstanceTDEInfoWithOptions(shared_ptr<DescribeDBInstanceTDEInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceTDEInfoResponse describeDBInstanceTDEInfo(shared_ptr<DescribeDBInstanceTDEInfoRequest> request);
  DescribeDBInstancesResponse describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancesResponse describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request);
  DescribeDBInstancesOverviewResponse describeDBInstancesOverviewWithOptions(shared_ptr<DescribeDBInstancesOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancesOverviewResponse describeDBInstancesOverview(shared_ptr<DescribeDBInstancesOverviewRequest> request);
  DescribeDedicatedClusterInstanceListResponse describeDedicatedClusterInstanceListWithOptions(shared_ptr<DescribeDedicatedClusterInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedClusterInstanceListResponse describeDedicatedClusterInstanceList(shared_ptr<DescribeDedicatedClusterInstanceListRequest> request);
  DescribeErrorLogRecordsResponse describeErrorLogRecordsWithOptions(shared_ptr<DescribeErrorLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeErrorLogRecordsResponse describeErrorLogRecords(shared_ptr<DescribeErrorLogRecordsRequest> request);
  DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttributeWithOptions(shared_ptr<DescribeInstanceAutoRenewalAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceAutoRenewalAttributeResponse describeInstanceAutoRenewalAttribute(shared_ptr<DescribeInstanceAutoRenewalAttributeRequest> request);
  DescribeKernelReleaseNotesResponse describeKernelReleaseNotesWithOptions(shared_ptr<DescribeKernelReleaseNotesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKernelReleaseNotesResponse describeKernelReleaseNotes(shared_ptr<DescribeKernelReleaseNotesRequest> request);
  DescribeMongoDBLogConfigResponse describeMongoDBLogConfigWithOptions(shared_ptr<DescribeMongoDBLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMongoDBLogConfigResponse describeMongoDBLogConfig(shared_ptr<DescribeMongoDBLogConfigRequest> request);
  DescribeParameterModificationHistoryResponse describeParameterModificationHistoryWithOptions(shared_ptr<DescribeParameterModificationHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParameterModificationHistoryResponse describeParameterModificationHistory(shared_ptr<DescribeParameterModificationHistoryRequest> request);
  DescribeParameterTemplatesResponse describeParameterTemplatesWithOptions(shared_ptr<DescribeParameterTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParameterTemplatesResponse describeParameterTemplates(shared_ptr<DescribeParameterTemplatesRequest> request);
  DescribeParametersResponse describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParametersResponse describeParameters(shared_ptr<DescribeParametersRequest> request);
  DescribePriceResponse describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePriceResponse describePrice(shared_ptr<DescribePriceRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeRenewalPriceResponse describeRenewalPriceWithOptions(shared_ptr<DescribeRenewalPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRenewalPriceResponse describeRenewalPrice(shared_ptr<DescribeRenewalPriceRequest> request);
  DescribeReplicaSetRoleResponse describeReplicaSetRoleWithOptions(shared_ptr<DescribeReplicaSetRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeReplicaSetRoleResponse describeReplicaSetRole(shared_ptr<DescribeReplicaSetRoleRequest> request);
  DescribeRoleZoneInfoResponse describeRoleZoneInfoWithOptions(shared_ptr<DescribeRoleZoneInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRoleZoneInfoResponse describeRoleZoneInfo(shared_ptr<DescribeRoleZoneInfoRequest> request);
  DescribeRunningLogRecordsResponse describeRunningLogRecordsWithOptions(shared_ptr<DescribeRunningLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRunningLogRecordsResponse describeRunningLogRecords(shared_ptr<DescribeRunningLogRecordsRequest> request);
  DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfigurationWithOptions(shared_ptr<DescribeSecurityGroupConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecurityGroupConfigurationResponse describeSecurityGroupConfiguration(shared_ptr<DescribeSecurityGroupConfigurationRequest> request);
  DescribeSecurityIpsResponse describeSecurityIpsWithOptions(shared_ptr<DescribeSecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecurityIpsResponse describeSecurityIps(shared_ptr<DescribeSecurityIpsRequest> request);
  DescribeShardingNetworkAddressResponse describeShardingNetworkAddressWithOptions(shared_ptr<DescribeShardingNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeShardingNetworkAddressResponse describeShardingNetworkAddress(shared_ptr<DescribeShardingNetworkAddressRequest> request);
  DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowLogRecordsResponse describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request);
  DescribeTagsResponse describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTagsResponse describeTags(shared_ptr<DescribeTagsRequest> request);
  DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(shared_ptr<DescribeUserEncryptionKeyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(shared_ptr<DescribeUserEncryptionKeyListRequest> request);
  DestroyInstanceResponse destroyInstanceWithOptions(shared_ptr<DestroyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DestroyInstanceResponse destroyInstance(shared_ptr<DestroyInstanceRequest> request);
  EvaluateResourceResponse evaluateResourceWithOptions(shared_ptr<EvaluateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EvaluateResourceResponse evaluateResource(shared_ptr<EvaluateResourceRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  MigrateAvailableZoneResponse migrateAvailableZoneWithOptions(shared_ptr<MigrateAvailableZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MigrateAvailableZoneResponse migrateAvailableZone(shared_ptr<MigrateAvailableZoneRequest> request);
  MigrateToOtherZoneResponse migrateToOtherZoneWithOptions(shared_ptr<MigrateToOtherZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MigrateToOtherZoneResponse migrateToOtherZone(shared_ptr<MigrateToOtherZoneRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyAuditLogFilterResponse modifyAuditLogFilterWithOptions(shared_ptr<ModifyAuditLogFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAuditLogFilterResponse modifyAuditLogFilter(shared_ptr<ModifyAuditLogFilterRequest> request);
  ModifyAuditPolicyResponse modifyAuditPolicyWithOptions(shared_ptr<ModifyAuditPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAuditPolicyResponse modifyAuditPolicy(shared_ptr<ModifyAuditPolicyRequest> request);
  ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPolicyResponse modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request);
  ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(shared_ptr<ModifyDBInstanceConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(shared_ptr<ModifyDBInstanceConnectionStringRequest> request);
  ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(shared_ptr<ModifyDBInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(shared_ptr<ModifyDBInstanceDescriptionRequest> request);
  ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTimeWithOptions(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTime(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request);
  ModifyDBInstanceMonitorResponse modifyDBInstanceMonitorWithOptions(shared_ptr<ModifyDBInstanceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceMonitorResponse modifyDBInstanceMonitor(shared_ptr<ModifyDBInstanceMonitorRequest> request);
  ModifyDBInstanceNetExpireTimeResponse modifyDBInstanceNetExpireTimeWithOptions(shared_ptr<ModifyDBInstanceNetExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceNetExpireTimeResponse modifyDBInstanceNetExpireTime(shared_ptr<ModifyDBInstanceNetExpireTimeRequest> request);
  ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkTypeWithOptions(shared_ptr<ModifyDBInstanceNetworkTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkType(shared_ptr<ModifyDBInstanceNetworkTypeRequest> request);
  ModifyDBInstanceSSLResponse modifyDBInstanceSSLWithOptions(shared_ptr<ModifyDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceSSLResponse modifyDBInstanceSSL(shared_ptr<ModifyDBInstanceSSLRequest> request);
  ModifyDBInstanceSpecResponse modifyDBInstanceSpecWithOptions(shared_ptr<ModifyDBInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceSpecResponse modifyDBInstanceSpec(shared_ptr<ModifyDBInstanceSpecRequest> request);
  ModifyDBInstanceTDEResponse modifyDBInstanceTDEWithOptions(shared_ptr<ModifyDBInstanceTDERequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceTDEResponse modifyDBInstanceTDE(shared_ptr<ModifyDBInstanceTDERequest> request);
  ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttributeWithOptions(shared_ptr<ModifyInstanceAutoRenewalAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceAutoRenewalAttributeResponse modifyInstanceAutoRenewalAttribute(shared_ptr<ModifyInstanceAutoRenewalAttributeRequest> request);
  ModifyInstanceVpcAuthModeResponse modifyInstanceVpcAuthModeWithOptions(shared_ptr<ModifyInstanceVpcAuthModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceVpcAuthModeResponse modifyInstanceVpcAuthMode(shared_ptr<ModifyInstanceVpcAuthModeRequest> request);
  ModifyNodeSpecResponse modifyNodeSpecWithOptions(shared_ptr<ModifyNodeSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNodeSpecResponse modifyNodeSpec(shared_ptr<ModifyNodeSpecRequest> request);
  ModifyNodeSpecBatchResponse modifyNodeSpecBatchWithOptions(shared_ptr<ModifyNodeSpecBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNodeSpecBatchResponse modifyNodeSpecBatch(shared_ptr<ModifyNodeSpecBatchRequest> request);
  ModifyParametersResponse modifyParametersWithOptions(shared_ptr<ModifyParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyParametersResponse modifyParameters(shared_ptr<ModifyParametersRequest> request);
  ModifyResourceGroupResponse modifyResourceGroupWithOptions(shared_ptr<ModifyResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyResourceGroupResponse modifyResourceGroup(shared_ptr<ModifyResourceGroupRequest> request);
  ModifySecurityGroupConfigurationResponse modifySecurityGroupConfigurationWithOptions(shared_ptr<ModifySecurityGroupConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecurityGroupConfigurationResponse modifySecurityGroupConfiguration(shared_ptr<ModifySecurityGroupConfigurationRequest> request);
  ModifySecurityIpsResponse modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecurityIpsResponse modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request);
  ReleaseNodePrivateNetworkAddressResponse releaseNodePrivateNetworkAddressWithOptions(shared_ptr<ReleaseNodePrivateNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseNodePrivateNetworkAddressResponse releaseNodePrivateNetworkAddress(shared_ptr<ReleaseNodePrivateNetworkAddressRequest> request);
  ReleasePublicNetworkAddressResponse releasePublicNetworkAddressWithOptions(shared_ptr<ReleasePublicNetworkAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleasePublicNetworkAddressResponse releasePublicNetworkAddress(shared_ptr<ReleasePublicNetworkAddressRequest> request);
  RenewDBInstanceResponse renewDBInstanceWithOptions(shared_ptr<RenewDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewDBInstanceResponse renewDBInstance(shared_ptr<RenewDBInstanceRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  RestartDBInstanceResponse restartDBInstanceWithOptions(shared_ptr<RestartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartDBInstanceResponse restartDBInstance(shared_ptr<RestartDBInstanceRequest> request);
  RestoreDBInstanceResponse restoreDBInstanceWithOptions(shared_ptr<RestoreDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestoreDBInstanceResponse restoreDBInstance(shared_ptr<RestoreDBInstanceRequest> request);
  SwitchDBInstanceHAResponse switchDBInstanceHAWithOptions(shared_ptr<SwitchDBInstanceHARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchDBInstanceHAResponse switchDBInstanceHA(shared_ptr<SwitchDBInstanceHARequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  TransformToPrePaidResponse transformToPrePaidWithOptions(shared_ptr<TransformToPrePaidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransformToPrePaidResponse transformToPrePaid(shared_ptr<TransformToPrePaidRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersionWithOptions(shared_ptr<UpgradeDBInstanceEngineVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersion(shared_ptr<UpgradeDBInstanceEngineVersionRequest> request);
  UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersionWithOptions(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBInstanceKernelVersionResponse upgradeDBInstanceKernelVersion(shared_ptr<UpgradeDBInstanceKernelVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dds20151201

#endif
