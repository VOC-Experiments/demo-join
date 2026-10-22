include $(TOPDIR)/rules.mk
PKG_NAME:=demo-join
PKG_VERSION:=@VERSION@
PKG_RELEASE:=@REVISION@
PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
include $(INCLUDE_DIR)/package.mk

define Package/demo-join
  SECTION:=utils
  CATEGORY:=Utilities
  TITLE:=demo-join canonical CI experiment
  DEPENDS:=+demo-app +demo-side
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) $(TOPDIR)/recipes/demo-join/src/. $(PKG_BUILD_DIR)/
endef

define Build/Compile
	$(TARGET_CC) $(TARGET_CFLAGS) $(TARGET_LDFLAGS) $(PKG_BUILD_DIR)/app.c -ldemo-side -ldemo-core -o $(PKG_BUILD_DIR)/demo-join
endef

define Package/demo-join/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/demo-join $(1)/usr/bin/
endef

$(eval $(call BuildPackage,demo-join))
