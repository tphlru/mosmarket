let tableElement;

$(document).ready(function () {

    $(function () {
        eel.expose(say_hello_js);               // Expose this function to Python
    });

    // Initialize the DataTable
    let tableElement = $('#datatable');

    if (tableElement.length) {
        let table = tableElement.DataTable({
            "language": {
                "paginate": {
                    "previous": "Back ",
                    "next": " Next",
                },
            },
        });


        // Search bar
        $('#customSearch').on('keyup', function () {
            table.search(this.value).draw();
        });

        // Select all checkbox
        $('#select-all').on('click', function () {
            // Check or uncheck all checkboxes
            var checked = $(this).prop('checked');
            $('.row-checkbox').prop('checked', checked);
        });

        // Select all button
        $('#select-all-btn').on('click', function () {
            // Check all checkboxes
            $('.row-checkbox').prop('checked', true);
            $('#select-all').prop('checked', true);
        });

        // Unselect all button
        $('#unselect-all-btn').on('click', function () {
            // Uncheck all checkboxes
            $('.row-checkbox').prop('checked', false);
            $('#select-all').prop('checked', false);
        });
    } else {
        console.error('#datatable does not exist in your document!');
    }

});

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
    let table = document.getElementById("datatable"); // your table
    let parsedData = JSON.parse(data);
    $('#datatable').DataTable().draw();
    console.log(parsedData);
    for (let i = 0; i < parsedData.length; i++) {
        let row = table.insertRow(-1); // -1 to append at the end

        let cell1 = row.insertCell(0);
        let cell2 = row.insertCell(1);
        let cell3 = row.insertCell(2);
        let cell4 = row.insertCell(3);
        let cell5 = row.insertCell(4);

        let checkbox = document.createElement('input');
        checkbox.type = "checkbox";
        checkbox.className = "row-checkbox";

        cell1.appendChild(checkbox);
        cell2.innerHTML = parsedData[i]['SECID'];
        cell3.innerHTML = parsedData[i]['SHORTNAME'];
        cell4.innerHTML = parsedData[i]['ISIN'];
        cell5.innerHTML = parsedData[i]['LISTLEVEL'];
    }

}