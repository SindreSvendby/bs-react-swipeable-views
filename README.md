
# bs-react-swipeable-views

Bindings for [react-swipeable-views](https://github.com/oliviertassinari/react-swipeable-views)

This libary only contains the binding for the npm package [react-swipeable-views](https://www.npmjs.com/package/react-swipeable-views).

It does not include the utils and native packages that are part of the monorepo. 

for usage check out [api](https://react-swipeable-views.com/api/api/)  

# Is this binding ready for prime time?

It contains the complete set of props that react-swipeable-views has as of 0.13.3

But since I'm new to Reason, it would be good if someone could check the bindings for the two props listed below. Besides that, everything should be in order.  

- [ ]  is the `onSwitching` prop correctly written. I get unused BS attributes warnings from the compiler

- [ ] is the `springConfig` prop correctly written? I'm not familiar with `[@bs.deriving abstract]` - just copy pasted from another package that had react bindings. 


# Installation

1. Add dependencies to package.json
```sh 
yarn add react-swipeable-views  
yarn add bs-react-swipeable-views
```

2. Add bindings to bsconfig.json
```json
"bs-dependencies": [
    "bs-react-swipeable-views"  
  ]
``` 

# Usage

```Reason
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
```


# Example

See usage in [example](example/) folder 

```
git clone git@github.com:SindreSvendby/bs-react-swipeable-views.git
cd bs-react-swipeable-views
yarn
yarn build:bsb
yarn server
# Go to http://localhost:8000 
```

you can also see the example running here https://bs-react-swipeable-views.now.sh/
