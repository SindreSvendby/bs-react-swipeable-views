let style1 =
  ReactDOMRe.Style.make(
    ~padding="15px",
    ~minHeight="100",
    ~backgroundColor="#FEA900",
    ~color="#fff",
    (),
  );

let style2 =
  ReactDOMRe.Style.make(
    ~padding="15px",
    ~minHeight="100",
    ~backgroundColor="#B3DC4A",
    ~color="#fff",
    (),
  );

let style3 =
  ReactDOMRe.Style.make(
    ~padding="15px",
    ~minHeight="100",
    ~backgroundColor="#6AC0FF",
    ~color="#fff",
    (),
  );

[@react.component]
let make = () => {
  <main>
    <ReactSwipeableViews enableMouseEvents=true>
      <div style=style1> "slide nr 1"->React.string </div>
      <div style=style2> "slide nr 2"->React.string </div>
      <div style=style3> "slide nr 3"->React.string </div>
    </ReactSwipeableViews>
  </main>;
};