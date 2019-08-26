
# bs-react-swipeable-views

Bindings for [react-swipeable-views](https://github.com/oliviertassinari/react-swipeable-views)

This libary only contains the binding for the npm package [react-swipeable-views](https://www.npmjs.com/package/react-swipeable-views).

It does not include the utils and native packages that are part of the monorepo. 

for usage check out [api](https://react-swipeable-views.com/api/api/)  

# TODO:
    before releasing it would be good to check:
    - [ ]  is the `onSwitching` prop correctly written. I get unused BS attributes warnings from the compiler
    - [ ] is the `springConfig` prop correctly written? I'm not familiar with `[@bs.deriving abstract]` - just copy pasted from another package that had react bindings. 
    - [ ] is there anything spesific to be done in package.json or bsconfig.json ?



# Build
```
npm run build
```

# Watch

```
npm run watch
```
