
# bs-react-swipeable-views

Bindings for [react-swipeable-views](https://github.com/oliviertassinari/react-swipeable-views)

This libary only contains the binding for the npm package [react-swipeable-views](https://www.npmjs.com/package/react-swipeable-views).

It does not include the utils and native packages that are part of the monorepo. 

for usage check out [api](https://react-swipeable-views.com/api/api/)  

# TODO

Before releasing it would be good to check

- [ ]  is the `onSwitching` prop correctly written. I get unused BS attributes warnings from the compiler

- [ ] is the `springConfig` prop correctly written? I'm not familiar with `[@bs.deriving abstract]` - just copy pasted from another package that had react bindings. 


# Example

See usage in example folder 

# Run Example

```
git clone git@github.com:SindreSvendby/bs-react-swipeable-views.git
cd bs-react-swipeable-views
yarn
yarn server
# Go to http://localhost:8000 
```

you can also see the example running here https://bs-react-swipeable-views.now.sh/

# Build
```
npm run build
```



# Watch

```
npm run watch
```
