/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    bool  _lightKeyboard;
    _UIUCBKBSelectionBackground * _selectionBackgroundView;
}

+ (id)darkKeyboardProvider;
+ (id)lightKeyboardProvider;

- (void).cxx_destruct;
- (void)configureButton:(id)arg1 fromBarItem:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)updateButton:(id)arg1 forSelectedState:(bool)arg2;
- (void)updateButton:(id)arg1 toUseButtonShapes:(bool)arg2;

@end
