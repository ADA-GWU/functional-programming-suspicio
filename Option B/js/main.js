const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

let n

rl.question('', (answer) => {
    n = parseInt(answer)
    rl.close();

    let list = Array.from(Array(n).keys())

    const removeEven = function () {
        list = list.filter((_, key) => (key + 1) % 2 !== 0)
    }

    const removeOdd = function () {
        list = list.filter((_, key) => (key + 1) % 2 !== 1)
    }

    const removeThird = function () {
        list = list.filter((_, key) => (key + 1) % 3 !== 0)
    }

    const process = function (md) {
        if (md === 0)
            removeEven()
        if (md === 1)
            removeOdd()
        if (md === 2)
            removeThird()
        if (list.length === 1)
            return
        process((md + 1) % 3)
    }

    process(0)

    console.log(parseInt(...list) + 1)
})
