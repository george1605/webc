// conversion module
// from JSX to plain JS
var info = "var x = <Link></Link>; React.append(x);";
function Link()
{
    var x = document.createElement('A');
    x.setAttribute('href', String('about:blank'));
    x.innerHTML = "link";
    return x;
}

function getFile(fname)
{
    fetch(fname, {mode: 'cors'})
        .then(res => res.json())
        .then(data => console.log(data));
}

class ReactError extends Error
{
    constructor(name, msg)
    {
        this.name = name;
        this.msg = msg;
    }
    alert()
    {
        window.alert(this.name + ": " + this.msg);
    }
    print()
    {
        console.error(this.name + ": " + this.msg);
    }
}

var React = {
    states: {},
    useState(x)
    {
        return React.states[String(x)];
    },
    saveState(x, y)
    {
        React.states[x] = y;
    },
    append(x)
    {
        document.body.appendChild(x);
    },
    empty(x)
    {
        if(x.innerHMTL)
            x.innerHTML = '';
    },
    add()
    {
        
    },
    useEffect(func)
    {
        if(typeof func !== "function")
            return new ReactError("TypeError", "useEffect() parameter func is not a function");
        func();
    }
};

function exportApp(x)
{
    document.body.innerHMTL = String(x);
}

function replaceJSX(str)
{
    var x = String(str);
    var y = x.replace(/<Img><\/Img>/, "document.createElement('IMG')");
    var z = y.replace(/<Btn><\/Btn>/, "document.createElement('BUTTON')");
    var n = z.replace(/<Link><\/Link>/, "Link()");
    return n;
}

function preventXSS(str)
{
    return str.replace('<', '&lt;').replace('>', '&gt;');
}

function execJSX(str)
{
    var p = replaceJSX(str);
    console.log(p); // debugging
    eval(p);
}

execJSX(info);