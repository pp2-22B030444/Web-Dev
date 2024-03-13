
function deleteLine(button) {
    button.parentNode.remove();
}
function addItem() {
    var input = document.getElementById('text');
    var taskText = input.value.trim(); // Получаем текст из поля ввода и удаляем лишние пробелы в начале и в конце

    if (taskText !== '') { // Проверяем, что текст не пустой
        var container = document.getElementById('taskContainer');
        var newItem = document.createElement('div'); // Создаем новый элемент списка
        newItem.className = 'line'; // Добавляем класс для стилизации
        newItem.innerHTML = `
                <input type="checkbox" id="checkbox-${container.childElementCount + 1}" name="checkbox-${container.childElementCount + 1}">
                <label  for="checkbox-${container.childElementCount + 1}">${taskText}</label>
                <button class="delete-button" onclick="deleteLine(this)">🗑️</button>`; // Задаем содержимое нового элемента
        container.appendChild(newItem); // Добавляем элемент в контейнер задач
        input.value = ''; // Очищаем поле ввода

        var newCheckbox = newItem.querySelector('input[type="checkbox"]');
        newCheckbox.addEventListener('change', function() {
            if (this.checked) {
                newItem.querySelector('label').style.textDecoration = 'line-through';
            } else {
                newItem.querySelector('label').style.textDecoration = 'none';
            }
        });
    }

}