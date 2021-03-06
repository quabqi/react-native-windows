// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include <Views/ControlViewManager.h>

namespace react::uwp {

class DatePickerViewManager : public ControlViewManager {
  using Super = ControlViewManager;

 public:
  DatePickerViewManager(const std::shared_ptr<IReactInstance> &reactInstance);

  facebook::react::ShadowNode *createShadow() const;
  const char *GetName() const override;
  folly::dynamic GetNativeProps() const override;

  YGMeasureFunc GetYogaCustomMeasureFunc() const override;

 protected:
  XamlView CreateViewCore(int64_t tag) override;

  friend class DatePickerShadowNode;
};

} // namespace react::uwp
