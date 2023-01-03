static const char SIMPLE_ASSISTANT_FRONT[] PROGMEM = R"(
{
  "title": "SimpleAssitant",
  "uri": "/simpleAssistant",
  "menu": true,
  "element": [
    {
      "name": "caption",
      "type": "ACText",
      "value": "Introduce required data for Accuweather connection.",
      "style": "font-family:Arial;font-weight:bold;text-align:center;margin-bottom:10px;color:DarkSlateBlue"
    },
    {
      "name": "newline",
      "type": "ACElement",
      "value": "<br>"
    },
    {
      "name": "timeZone",
      "type": "ACSelect",
      "option": [],
      "label": "Time-Zone",
      "selected": 1
    },
    {
      "name": "acAPI",
      "type": "ACInput",
      "label": "Accuweather API",
      "placeholder": "Introduce Accuweather API Key",
      "pattern": "^(([a-zA-Z0-9]|[a-zA-Z0-9][a-zA-Z0-9\\-]*[a-zA-Z0-9])\\.)*([A-Za-z0-9]|[A-Za-z0-9][A-Za-z0-9\\-]*[A-Za-z0-9])$"
    },
    {
      "name": "acLocation",
      "type": "ACInput",
      "label": "Accuweather Weather Location",
      "placeholder": "Introduce Accuweather Location",
      "apply": "number"
    },
    {
      "name": "saveButton",
      "type": "ACSubmit",
      "value": "Save",
      "uri": "/save"
    }
  ]
}
)";

static const char SIMPLE_ASSISTANT_FRONT_SAVE[] PROGMEM = R"(
{
  "title": "saveData",
  "uri": "/save",
  "menu": true,
  "element": [
    {
      "name": "caption",
      "type": "ACText",
      "value": "Follones",
      "style": "font-family:Arial;font-weight:bold;text-align:center;margin-bottom:10px;color:DarkSlateBlue"
    }
  ]
}
)";