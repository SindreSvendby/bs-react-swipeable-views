[@bs.deriving abstract]
type springConfigType = {
  duration: string,
  easeFunction: string,
  delay: string,
};

[@bs.module "react-swipeable-views"] [@react.component]
external make:
  (
    ~action: 'action => unit=?,
    ~animateHeight: bool=?,
    ~animateTransitions: bool=?,
    ~axis: [@bs.string] [
             | `x
             | `y
             | [@bs.as "x-reverse"] `xReverse
             | [@bs.as "y-reverse"] `yReverse
           ]
             =?,
    ~children: 'a,
    ~containerStyle: ReactDOMRe.Style.t=?,
    ~disabled: bool=?,
    ~disableLazyLoading: bool=?,
    ~enableMouseEvents: bool=?,
    ~hysteresis: float=?,
    ~ignoreNativeScroll: bool=?,
    ~onChangeIndex: (int, int, 'b) => unit=?,
    ~onMouseDown: ReactEvent.Mouse.t => unit=?,
    ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
    ~onMouseUp: ReactEvent.Mouse.t => unit=?,
    ~onScroll: ReactEvent.UI.t => unit=?,
    ~onSwitching: (int, [@bs.string] [ | `move | [@bs.as "end"] `end_]) => unit
                    =?,
    ~onTouchEnd: ReactEvent.Touch.t => unit=?,
    ~onTouchStart: ReactEvent.Touch.t => unit=?,
    ~onTransitionEnd: ReactEvent.Transition.t => unit=?,
    ~index: int=?,
    ~springConfig: springConfigType=?,
    ~threshold: int=?,
    ~resistance: bool=?,
    ~style: ReactDOMRe.Style.t=?,
    ~slideStyle: ReactDOMRe.Style.t=?
  ) =>
  React.element =
  "default";