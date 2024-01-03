let table;

$(document).ready(function () {

    $(function () {
        eel.expose(say_hello_js);               // Expose this function to Python
    });

    // Initialize the DataTable

    table = $('#datatable').DataTable({
        "language": {
            "paginate": {
                "previous": "Back ",
                "next": " Next",
            },
        },
        'columnDefs': [
            {
                'className': 'select-checkbox',
                'targets': 0,
                'checkboxes': {
                    'selectRow': true
                },
                'data': 1,
            }
        ],
        'order': [[1, 'asc']],
        'select': {
            'style': 'multi',
            'selector': 'td:first-child'
        },
    });


    // Search bar
    $('#customSearch').on('keyup', function () {
        table.search(this.value).draw();
    });

});

// Add delete button to each row
function addDeleteBtn() {
    $('#totalTable tr').each(function () {
        // Find the last td element
        let lastTd = $(this).find('td:last');

        // Create a new element and Insert the button HTML into the new element
        // And Append to the parent
        lastTd.parent().append($('<td></td>').html('<button class="delete-btn">X</button>'));
    });
}

addDeleteBtn()

// Handle delete button click
$('#totalTable').on('click', '.delete-btn', function () {
    let secid_to_del = $(this).closest('tr').find('td:eq(0)').text();
    $(this).closest('tr').remove();
    table.cell(table.column(0).data().indexOf(secid_to_del), 0).checkboxes.deselect();
});

$('#unselectall').on('click', function () {
    Array.from(document.getElementById("totalTable").rows).forEach(function (row, index) {
        if (index > 0) { // если индекс больше 0, то это не первая строка
            let cell = row.cells[0]; // получаем первую ячейку каждой строки
            let secid_to_del = cell.textContent; // получаем текстовое содержимое ячейки
            row.remove() // Удаляем строку в тотальной таблие
            table.cell(table.column(0).data().indexOf(secid_to_del), 0).checkboxes.deselect();
        }
    });
    table.draw()
})

eel.expose(callalert)

function callalert(text, alerttype = "info") {
    if (alerttype === "info") {
        alert(text)
    } else if (alerttype === "confirm") {

    }
    ask_answer = confirm(dirpath + " Указанный путь невалидный или директория не существует! Попробовать создать?")
    console.log(ask_answer)
    eel.trytocreatediranswer(ask_answer)
}

// Define a function that takes an optional argument
eel.expose(loadWorkdirPath)

function loadWorkdirPath(pathchoosen) {
    console.log(pathchoosen)
    let input = document.getElementById("working_dir_path");
    // If the function is called with an argument, change the input value to it
    if (pathchoosen !== undefined && !(pathchoosen instanceof Event)) {
        input.value = pathchoosen;
    } else if (pathchoosen instanceof Event) {
        // If the input value is changed by the user, call testfunc2()
        eel.select_workdir(document.getElementById("working_dir_path").value)
    }
}

// Link loadWorkdirPath func to onchange of the input element
document.getElementById("working_dir_path").onchange = loadWorkdirPath;


eel.expose(totalUpd);               // Expose this function to Python
function totalUpd(total_df) {
    if (!total_df) {
        eel.upd_total_stocks((table.columns(0).context[0].checkboxes.s.data)[0])
        return null
    }
    total_df = JSON.parse(total_df);
    total_df = total_df.map(dict => Object.values(dict));
    console.log(total_df)

    // Use a for loop to delete only the rows that contain the data, starting from the last row and going backwards
    for (let i = document.getElementById("totalTable").rows.length - 1; i > 0; i--) {
        // Use the deleteRow() method to delete the row at the specified index
        document.getElementById("totalTable").deleteRow(i);
    }


    for (let i = 0; i < total_df.length; i++) {
        let newrow = document.createElement("tr");
        for (let j = 0; j < total_df[i].length; j++) {
            let cell = document.createElement("td");

            // Use the innerHTML property to assign the value of the array element to the table cell element
            cell.innerHTML = total_df[i][j];

            // Use the appendChild() method to append the table cell element to the table row element
            newrow.appendChild(cell);
        }
        document.getElementById("totalTable").appendChild(newrow);
    }
    addDeleteBtn()

}

setInterval(totalUpd, 1000);


$(function () {
    $("#datepicker1").datepicker({
        autoclose: true,
        todayHighlight: true,
        todayBtn: "linked",
        title: "Start date"
    }).datepicker('update', new Date());
});

$(function () {
    $("#datepicker2").datepicker({
        autoclose: true,
        todayHighlight: true,
        todayBtn: "linked",
        title: "End date"
    }).datepicker('update', new Date());
});


eel.expose(say_hello_js);               // Expose this function to Python
function say_hello_js(x) {
    console.log("Hello from " + x);
}

let ids = ["listing1", "listing2", "listing3", "launch", "selectpath"]; //  update this array with ids

ids.forEach(function (id) {
        let element = document.getElementById(id);
        if (element) {
            element.onclick = function () {
                let status = $(this).data('status'); // Get the current status
                if (status === "on") {
                    $(this).data('status', "off");
                    console.log("off now")
                } else if (status === "off") {
                    $(this).data('status', "on");
                    console.log("off now")
                } else {
                    console.log('The id of the button is ', this.id);
                    $(this).data('status', "off");
                    status = "on"
                }
                $(this).toggleClass('btn-primary btn-secondary');
                eel.button_click(id, status)
            }
        }
    }
);

eel.expose(gentable);               // Expose this function to Python
function gentable(data) {
    let parsedData = JSON.parse(data);
    table.clear();
    table.draw();
    console.log(parsedData)

    for (let i = 0; i < parsedData.length; i++) {
        let rowdata = Object.values(parsedData[i])
        rowdata.unshift('');
        table.row.add(rowdata).draw();
    }
}

